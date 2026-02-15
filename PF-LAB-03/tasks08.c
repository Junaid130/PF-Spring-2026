#include <stdio.h>
int main() {
    int integer;
    float floatval;
    char character;

    printf("Enter an integer: ");
    scanf("%d", &integer);
    printf("Enter a float: ");
    scanf("%f", &floatval);
    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("\nYou entered:\nInteger: %d\nFloat: %f\nCharacter: %c\n", integer, floatval, character);

    return 0;
}