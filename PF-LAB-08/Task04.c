// Question 4: Write a C program that performs complete matrix analysis on a 3×3 matrix.
// Your program should handle all major operations including transpose, determinant, cofactor, adjoint, and inverse using only nested loops.
// Ensure that all stages are clearly displayed.
#include <stdio.h>
int main() {
    int mat[3][3] = {
        {1,  0, 3},
        {2, -1, 0},
        {0,  1, 4}
    };
    int choice;
    float det;

    printf("1. Transpose\n2. Determinant\n3. Cofactor\n4. Adjoint\n5. Inverse\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) 
        - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) 
        + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);

    if (choice == 1) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%2d ", mat[j][i]);
            }
            printf("\n");
        }
    } 
    else if (choice == 2) {
        printf("Determinant: %.2f\n", det);
    } 
    else {
 
        float co[3][3];
        co[0][0] = (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]);
        co[0][1] = -(mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]);
        co[0][2] = (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
        
        co[1][0] = -(mat[0][1] * mat[2][2] - mat[0][2] * mat[2][1]);
        co[1][1] = (mat[0][0] * mat[2][2] - mat[0][2] * mat[2][0]);
        co[1][2] = -(mat[0][0] * mat[2][1] - mat[0][1] * mat[2][0]);
        
        co[2][0] = (mat[0][1] * mat[1][2] - mat[0][2] * mat[1][1]);
        co[2][1] = -(mat[0][0] * mat[1][2] - mat[0][2] * mat[1][0]);
        co[2][2] = (mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]);

        if (choice == 3) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) printf("%.0f ", co[i][j]);
                printf("\n");
            }
        } 
        else if (choice == 4 || choice == 5) {
            if (choice == 5 && det == 0) {
                printf("Inverse not possible.\n");
            } else {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        float val = co[j][i]; 
                        if (choice == 4) printf("%.0f ", val);
                        else printf("%.2f ", val / det);
                    }
                    printf("\n");

                }
            }
        }
    }
}