// Sir. Talha Shahid ask you to write you a program which can help him in storing your quiz marks for pass students within range [5-10] will be stored, consider there are 10 students registered in Section BDS-1A. He wants an another array of same size where marks for failed students within range [0-5] are stored. Write a program for the given scenario. You program should exit if user enters -1 and will display the marks entered along with average of each array.
#include <stdio.h>
int main() {
    int marks[10], pass[10], fail[10];
    int passed = 0, failed = 0, totalpass=0, avgpass, totalfail=0, avgfail;
    for (int i = 0; i < 10; i++) {
        printf("Enter marks for student %d or -1 to exit ", i);
        scanf("%d", &marks[i]);
        if (marks[i] == -1) {
            break;
        }
        else if(marks[i] < 5){
            fail[failed] = marks[i];
            failed++;
        }
        else if(marks[i] >= 5){
            pass[passed] = marks[i];
            passed++;
        }

    }
    for(int i = 0; i < passed; i++){
        totalpass = totalpass + pass[i];
    }
    if(passed > 0){
    avgpass = totalpass / passed;
    printf("Total number of passed people: %d\nAverage of passsed people: %d\n", passed, avgpass);
    }

   
    for(int i = 0; i < failed; i++){
        totalfail = totalfail + fail[i];
    }

    if(failed > 0){
    avgfail = totalfail / failed;
    }
    printf("Total number of failed people: %d\nAverage of failed people: %d", failed, totalfail);

}