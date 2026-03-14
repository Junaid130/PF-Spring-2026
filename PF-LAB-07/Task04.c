// 4)Your class teacher asks you to develop a program that can help in converting mixed-case messages entered by users. The program should read a sentence using scanf("%[^\n]", str); and then convert all lowercase letters to uppercase and all uppercase letters to lowercase, without using any string library functions. Finally, display the converted message back to the user.
// Example: Input → HeLLo WoRLd → Output → hEllO wOrlD

#include <stdio.h>
int main(){
    char str[50];
    printf("Enter your string ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++){

        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        printf("%c", str[i]);
    }

}