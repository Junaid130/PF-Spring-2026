#include <stdio.h>
int main() {
    char c1, c2;
    printf("Which type of food would you like to get?\n1. Fast Food\n2. Desi Food\n");
    scanf(" %c", &c1); 

    switch(c1) {
        case '1':
            printf("Which Fast Food would you like to get?\n1. Burger\n2. Pizza\n");
            scanf(" %c", &c2);
            switch(c2) {
                case '1':
                    printf("It costs 500");
                    break;
                case '2':
                    printf("It costs 1200");
                    break;
            }
            break;

        case '2':
            printf("Which Desi Food would you like to get?\n1. Biryani\n2. Karahi\n");
            scanf(" %c", &c2);
            switch(c2) {
                case '1':
                    printf("It costs 350");
                    break;
                case '2':
                    printf("It costs 1500");
                    break;
            }
            break;

        default:
            printf("Invalid selection");
            break;
    }
    return 0;
}