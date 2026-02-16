#include <stdio.h>
int main() {
    int hours;
    char c1, c2;
    printf("How many hours would you like to park? ");
    scanf("%d", &hours);
    printf("Which vehicle would you like to park?\n1. Car\n2. Bike\n3. Bus\n");
    scanf(" %c", &c1); 

    switch(c1) {
        case '1':
            printf("Which service would you like to use?\n1. Regular Parking\n2. VIP Parking\n");
            scanf(" %c", &c2);
            switch(c2) {
                case '1':
                    printf("It costs %d\n", hours * 50);
                    break;
                case '2':
                    printf("It costs %d\n", hours * 100);
                    break;
            }
            break;

        case '2':
            printf("Which service would you like to use?\n1. Regular Parking\n2. Premium Parking\n");
            scanf(" %c", &c2);
            switch(c2) {
                case '1':
                    printf("It costs %d\n", hours * 20);
                    break;
                case '2':
                    printf("It costs %d\n", hours * 40);
                    break;
            }
            break;

        case '3':
            printf("It costs %d\n", hours * 200);
            break;
            
        default:
            printf("Invalid selection");
            break;
    }
    return 0;
}