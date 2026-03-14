#include <stdio.h>
int main() {
    int x[50];
    for(int i = 0; i < 4; i++) {
        printf("Enter a number: ");
        scanf("%d", &x[i]);
    }
    printf("Enter a number: ");
    scanf("%d", &x[4]);

    for(int i = 4; i >= 0; i--) {
        x[i + 1] = x[i];
    }

    x[0] = x[5];
    for(int i = 0; i < 5; i++) {
        printf("%d ", x[i]);
    }   
}