// 5)Write a program that reads 10 integers into an array. Finds and prints the difference (max - min) between the largest and smallest elements.
#include <stdio.h>
int main(){
    int x[10], max= -999, min= 999;
    for(int i=0;i<9;i++){
        printf("Enter a number: ");
        scanf("%d", &x[i]);
        if(x[i] > max){
            max = x[i];
        }
        if(x[i] < min){
            min = x[i];
        }
    }
    printf("The max is %d\nThe min is %d",max,min);
    printf("\nDifference (max - min): %d\n", max - min);
}