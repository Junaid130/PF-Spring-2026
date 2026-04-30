#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char studentName[50];
    int m1, m2, m3;
    float avg;
    char result[10];

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);

    printf("Enter 3 subject scores: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3.0;

    if(avg >= 40)
       strcpy(result, "PASS");
    else
       strcpy(result, "FAIL");

    fp = fopen("report.txt", "w+");

    if(fp == NULL){
       printf("file open nahi hui, masla hai\n");
       return 1;
    }

    fprintf(fp, "REPORT\n");
    fprintf(fp, "Name: %s", studentName);
    fprintf(fp, "Sub1: %d\nSub2: %d\nSub3: %d\n", m1, m2, m3);
    fprintf(fp, "Avg: %.2f\n", avg);
    fprintf(fp, "Result: %s\n", result);

    rewind(fp); 

    char line[100];
    printf("\n--- Reading from file ---\n");
    while(fgets(line, sizeof(line), fp) != NULL){
       printf("%s", line);
    }

    fclose(fp);
    return 0;
}