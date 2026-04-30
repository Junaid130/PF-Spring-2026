#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;
    char names[20];
    int grade;

    f = fopen("grades.txt", "w");
    if (f == NULL) {
        printf("Error opening file for writing\n");
        return 1; // Exit if file fails
    }

    for (int i = 0; i < 3; i++) {
        printf("Enter the name of Student %d: ", i + 1);
        scanf("%19s", names); // Added limit to prevent overflow

        printf("Enter the grade of Student %d: ", i + 1);
        scanf("%d", &grade);

        fprintf(f, "%s %d\n", names, grade); 
    }
    fclose(f);


    f = fopen("grades.txt", "r");
    if (f == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    printf("\nData from File\n");
    
    /* The scanf returns the number of items successfully read.
       By putting it in the while condition, it stops exactly when the data ends.
    */
    while (fscanf(f, "%s %d", names, &grade) == 2) {
        printf("Name: %-10s | Grade: %d\n", names, grade);
    }

    fclose(f);
    return 0;
}