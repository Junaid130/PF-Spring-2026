#include <stdio.h>
int main(){
    int units, type;
    printf("Enter your electricity units: ");
    scanf("%d", &units);
    if(units <= 100){
        printf("Rs. 10 per unit\n");
        printf("Bill: %d", units*10);
    }
    if(units > 100 && units <= 300){
        printf("Is customer \n1.Domestic \n2.Commerical\n");
        scanf("%d", &type);
        if(type == 1 ){
            printf("Domestic Rs. 12 per unit\n");
            printf("Bill: %d", units*12);
        }
        else{
            printf("Commercial Rs. 15 per unit\n");
            printf("Bill: %d", units*15);
        }
    }
    if(units > 300){
        printf("Rs. 20 per unit\n");
        printf("Bill: %d", units*20);
    }
}