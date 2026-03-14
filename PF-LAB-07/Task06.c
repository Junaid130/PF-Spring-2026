// 6)You are assisting your English language teacher who wants to analyze how many vowels and consonants appear in students’ submitted words. Write a program that reads a single word using scanf("%s", str); and counts the number of vowels and consonants in it without using any string library functions like strlen(). The program should then display both counts on the screen.
#include <stdio.h>
int main(){
    char str[50];
    int v=0,c=0;
    printf("Enter your string ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++){
        switch (str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                    v++;
                    break;

            default:
                    c++;
                    break;
        }
    }
    printf("Number of vowels are %d\nNumber of consonents are %d",v,c);

}