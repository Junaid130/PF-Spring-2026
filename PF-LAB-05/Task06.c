#include <stdio.h>
int main(){
    float sides1, sides2, sides3;
    printf("Input all three sides:\n");
    scanf("%f %f %f", &sides1, &sides2, &sides3);
    if((sides1 + sides2) <= sides3){
        printf("Invalid Triangle");
    }
    else if(sides1 == sides2 && sides1 == sides3 && sides2 == sides3){
        printf("Equilateral");
    }
    else if(((sides1 == sides2) && !(sides1 == sides3)) || ((sides1 == sides3) && !(sides1 == sides2)) ||((sides2 == sides3) && !(sides2 == sides1))){
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }
}