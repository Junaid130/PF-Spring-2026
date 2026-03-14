// 8)Write a program that reads a string using scanf("%[^A-Za-z]", str); so that it accepts and stores all characters except alphabets. The program should then display the entered non-alphabetic characters on the screen.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%99[^A-Za-z]", str);

    for(int i = 0;i<strlen(str);i++){
        printf("%c", str[i]);
    }
    return 0;
}