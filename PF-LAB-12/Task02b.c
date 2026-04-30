#include <stdio.h>
#include <stdlib.h>

int main() {
    int *contactIDs;
    int n = 3;

    contactIDs = malloc(n * sizeof(int));

    printf("Enter IDs for 3 contacts:\n");
    for (int i = 0; i < n; i++) {
        printf("Contact %d: ", i + 1);  
        scanf("%d", &contactIDs[i]);
    }

    int newSize = 5;
    int *temp;

    temp = (int *)realloc(contactIDs, newSize * sizeof(int));


    printf("\nEnter IDs for the 2 new contacts:\n");
    for (int i = 3; i < newSize; i++) {
        printf("Contact %d: ", i + 1);
        scanf("%d", &contactIDs[i]);
    }

    printf("\nComplete Contact List:\n");
    for (int i = 0; i < newSize; i++) {
        printf("ID: %d\n", contactIDs[i]);
    }

    free(contactIDs);
    return 0;
}