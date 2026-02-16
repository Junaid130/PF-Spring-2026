#include <stdio.h>
int main(){
    int years, salary;
    printf("Enter the number of years you served in this company? ");
    scanf("%d", &years);
    printf("Enter your salary: ");
    scanf("%d", &salary);
    if(years > 10){
        printf("Bonus: %.2f", salary * 0.3);
    }
    else if(years > 5){
        printf("Bonus: %.2f", salary * 0.2);
    }
    else {
        printf("Bonus: %.2f", salary * 0.1);
    }
}