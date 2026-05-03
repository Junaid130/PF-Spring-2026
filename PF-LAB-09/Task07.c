/*A university professor discovers after a difficult midterm that the highest mark in the class was only 60 out of 100. To make grading fair, she decides to scale all marks using the formula: new mark = (original mark / highest mark) x 100. This scaling must be applied directly to the original array — no second array is allowed — and the program must use pointer arithmetic to access and modify every element.

Write a C program that stores marks for 6 students in an integer array. Declare a pointer int *p = arr. Use a loop with pointer arithmetic *(p + i) to first find the highest mark, then in a second loop, scale each element in-place using the formula above(use float arithmetic, then cast back to int). Print the original array before scaling and the updated array after, using pointer notation throughout — no array indexing like arr[i] is allowed.

Scaling formula in code: *(p + i) = (int)(((float)*(p + i) / highest) * 100); — use two separate loops, one for finding max and one for applying the formula. Never use arr[i]anywhere.
*/
#include <stdio.h>
int main(){
    int arr[10];
    int *p = arr;
    int highest = 0;
    for(int i = 0; i < 6; i++){
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", p + i);
    }
    for(int i = 0; i < 6; i++){
        if(*(p+i) > highest){
            highest = *(p+i);
        }
    }

    for(int i = 0; i<6; i++){
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);
    }

    for(int i = 0; i < 6; i++){
        printf("Scaled marks: %d\n", *(p + i));
    }
}