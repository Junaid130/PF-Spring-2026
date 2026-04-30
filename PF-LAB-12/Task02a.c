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
    free(contactIDs);
}