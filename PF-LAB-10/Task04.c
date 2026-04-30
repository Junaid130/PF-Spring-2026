#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int state = 0;
    char names[5][30];
    char find[30];

    // 1. Input names
    for(int j = 0; j < 5; j++) {
        printf("Enter the name for student %d: ", j + 1);
        fgets(names[j], 30, stdin);
        
        // Remove newline immediately after input
        names[j][strcspn(names[j], "\n")] = '\0';
    }

    // 2. Display names
    printf("\nList of students:\n");
    for (int x = 0; x < 5; x++){
        printf("%d. %s\n", x + 1, names[x]);
    }

    // 3. Searching
    printf("\nEnter the name of student you want to search: ");
    // Use fgets here too so you can search for full names (e.g., "Junaid Ahmed")
    fgets(find, 30, stdin);
    find[strcspn(find, "\n")] = '\0';

    for (int i = 0; i < 5; i++) {
        if(strcmp(names[i], find) == 0) {
            printf("Found that student at row number %d\n", i + 1);
            state = 1;
            break; // Stop searching once found
        }
    }

    if (state == 0) {
        printf("Student not found!\n");
    }

    return 0;
}