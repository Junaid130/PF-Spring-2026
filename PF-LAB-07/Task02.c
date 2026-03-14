#include <stdio.h>
int main(){
    int x[10] = {0,1,1,2,2,2,3,3,3,3};
    int n, a=0;
    printf("Enter number to search ");
    scanf("%d", &n);

    for(int i=0;i<=9;i++){
        if(x[i] == n){
            a++;
        }
    }

    if(a == 0){
        printf("Number is not found");
    }
    else printf("Number is found %d times", a);
}