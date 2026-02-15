#include <stdio.h>
int main(){
    double x;
    printf("Enter a float: ");
    scanf("%lf", &x);

    printf("Default: %lf\n" , x);
    printf("2 Decimal: %.2lf\n" , x);
    printf("5 Decimal: %.5lf\n" , x);

    return 0;
}