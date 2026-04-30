#include <stdio.h>
#include <stdlib.h>

int main() {
    int numStudents;
    float *grades;
        printf("Enter the number of students enrolled: ");
        scanf("%d", &numStudents);

    grades = malloc(numStudents * sizeof(float));

    for (int i = 0; i < numStudents; i++) {
            printf("Enter grade for student %d: ", i + 1);
            scanf("%f", &grades[i]);
    }   

    printf("\nFinal Grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %.2f\n", i + 1, grades[i]);
    }

    free(grades); // Don't forget to free

    return 0;
}