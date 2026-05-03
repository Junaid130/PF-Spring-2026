/*A school tracks daily attendance for 4 students over 5 school days. Attendance is
recorded as 1 (present) or 0 (absent) in a 2D grid where rows represent students and
columns represent days Monday through Friday. The attendance officer needs a
program that uses a pointer to traverse the entire 2D grid and calculates each
student's total attendance count for the week, flagging any student with fewer than 3
days present as being at risk.
TASK
Write a C program with a 2D array int attendance[4][5] initialized with a mix of 0s and
1s. Declare a pointer int (*p)[5] = attendance. Use nested loops — the outer loop
moves across rows using (p + i), the inner loop accesses columns using (*(p + i))[j] —
to compute each student's weekly total. Print a report: for each student (Student 1 to
4), print their day-by-day attendance pattern and total days present, then append "At
risk" if the total is below 3.
HINT
int (*p)[5] is a pointer to an array of 5 integers — the parentheses are critical. (p + i)
points to row i. Dereference with *(p + i) to get the row, then index the column with [j]
to get each element
*/
#include <stdio.h>
int main(){
    int attendance[4][5] = {
        {1, 0, 0, 1, 1}, // 3, 2, 3, 3
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1}
    };
    int (*p)[5] = attendance;
    int count;
    for(int i= 0 ; i<4 ; i++){
        count = 0;
        for(int j = 0; j<5; j++){
            if((*(p + i))[j] == 1) count++;
        }
        if(count < 3 ) printf("Warning for student %d\n", i+1);
    }

}