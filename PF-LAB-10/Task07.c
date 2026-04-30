#include <stdio.h>
#include <string.h>

int main() {
    FILE *myfile;
    int prodcount = 0;
    char prodname[100];
    int qty = 0;

    myfile = fopen("inventory.txt", "a");
    if (myfile == NULL) {
        printf("Error when appending file!\n");
        return 1;
    }

    printf("How many products do you want to add? ");
    scanf("%d", &prodcount);
    
    // This consumes the leftover newline from the scanf above
    getchar(); 

    for (int x = 0; x < prodcount; x++) {
        printf("\nEnter the product name: ");
        // %[^\n] allows names with spaces. 99 limits length to prevent overflow.
        scanf(" %99[^\n]", prodname); 

        printf("Enter the product quantity: ");
        scanf("%d", &qty);
        
        // Clear buffer again for the next product name loop
        getchar(); 

        fprintf(myfile, "Product: %s | Quantity: %d\n", prodname, qty);
    }

    fclose(myfile);

    // Adding the test product
    char testprod[100] = "Lenovo t440s";
    int qty2 = 5;
    
    myfile = fopen("inventory.txt", "a");
    if (myfile != NULL) {
        fprintf(myfile, "Product: %s | Quantity: %d\n", testprod, qty2);
        fclose(myfile);
    }

    printf("\nInventory updated successfully.\n");
    return 0;
}