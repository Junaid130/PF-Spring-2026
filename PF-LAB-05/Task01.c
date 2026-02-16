#include <stdio.h>
int main(){
    int family_income;
    float CGPA ;
    printf("Enter your CGPA: ");
    scanf("%f", &CGPA);
    printf("Enter your family income: ");
    scanf("%d", &family_income);
    if(CGPA >= 3.5){
        if(family_income < 50000){
            printf("100 percent scholarship");
        }
        else{
            printf("50 percent scholarship");
        }
    }
    else{
        if(CGPA >= 3.0 && family_income < 40000){
            printf("25 percent scholarship");
        }
        else{
            printf("no scholarship");
        }
    return 0;
    }
} 