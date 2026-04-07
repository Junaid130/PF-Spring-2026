#include <stdio.h>
#include <string.h>
int validatePIN(int storedPIN, int enteredPIN);
int main(){
    int storedPIN = 4729;
    int userPIN;
    int found = 0;
    int attempts = 0;
    while(found == 0){
        printf("\nEnter the pin ");
        scanf("%d", &userPIN);
        found = validatePIN(storedPIN,userPIN);
        if(found == 1){
            printf("successful pin entry");
            
        }else if(attempts < 2){
            printf("Please try again %d tries remaining\n", 2 - attempts);
        }else {printf("LOCKED"); break;}
        attempts++;
    }

}
int validatePIN(int storedPIN, int enteredPIN){
    if(storedPIN == enteredPIN){
        return(1);
    }else return(0);
}

