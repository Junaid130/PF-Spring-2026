#include <stdio.h>

int main() {
    FILE *myfile1;
    int number = 0;
    int sum = 0;
    float avg = 0.0;
    int count = 0; // Better to count how many were actually read

    // --- WRITING ---
    myfile1 = fopen("score.txt", "w");
    if (myfile1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Enter the score for student %d: ", i + 1);
        if (scanf("%d", &number) == 1) {
            fprintf(myfile1, "%d\n", number);
        }
    }
    fclose(myfile1);

    // --- READING ---
    myfile1 = fopen("score.txt", "r");
    if (myfile1 == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    // This loop only runs if a number is successfully read
    while (fscanf(myfile1, "%d", &number) == 1) {
        sum += number;
        count++; 
    }
    fclose(myfile1);

    // Calculation using the actual count of numbers found
    if (count > 0) {
        avg = (float)sum / count;
        printf("\nTotal Sum: %d\n", sum);
        printf("Average:   %.2f\n", avg);
    } else {
        printf("No data found in file.\n");
    }

    return 0;
}