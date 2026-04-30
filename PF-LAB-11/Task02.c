/*Q2 Password Strength Checker — Recursive Character x
📋 Scenario
A cybersecurity firm wants a lightweight password auditor. The tool must x how many uppercase letters appear in a password string. The team decided to implement this using recursion rather than a loop — each recursive call examines one character and moves to the next.
✅ Your Tasks
1. Write a recursive function int xUpper(char *str) that xs and returns the number of uppercase characters in a string.
2. Base case: return 0 when the null terminator '\0' is reached.
3. In main(), accept a password from the user and print the x of uppercase letters found.
4. Extend the function (or write a second recursive function) to also x digits (0–9) in the
same pass.
💡 Hint: Use str[0] to examine the current character and str+1 (or &str[1]) to recurse into the rest of the string.*/
#include <stdio.h>
int countUpper(char *str){
    if(str[0] == '\0'){
        return 0;
    }
    int x = 0;
    if(str[0] >= 'A' && str[0] <= 'Z'){
        x = 1;
    }
    return x + countUpper(str + 1);
}
int main(){
    char password[100];
    printf("Enter a password: ");
    scanf("%s", password);
    printf("Number of uppercase letters: %d\n", countUpper(password));
    return 0;
}