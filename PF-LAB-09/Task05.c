#include <stdio.h>
float toMegajoules(float kwh);
float toBTU(float kwh);
float toCalories(float kwh);
int main(){
    float kwh;
    printf("\nEnter the readings in Kilowatt-hours kWh ");
    scanf("%f", &kwh);
    printf("\n Megajoules = %.2f", toMegajoules(kwh));
    printf("\n BTU's = %.2f", toBTU(kwh));
    printf("\n Calories = %.2f", toCalories(kwh));
}
float toMegajoules(float kwh){
    return(kwh * 3.6);
}
float toBTU(float kwh){
    return(kwh * 3412.14);
}
float toCalories(float kwh){
    return(kwh * 859845.0);
}