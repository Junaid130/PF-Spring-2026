#include <stdio.h>
int main() {
    int a[5][5], b[5][5];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of Matrix A:\n");
        for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    printf("\nMatrix A\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    printf("\nMatrix Types for A\n");

    if(r1 == c1)
        printf("Square Matrix\n");

    if(r1 != c1)
        printf("Rectangular Matrix\n");

    if(r1 == 1 && c1 > 1)
        printf("Row Matrix\n");

    if(c1 == 1 && r1 > 1)
        printf("Column Matrix\n");

    int isZero = 1;
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            if(a[i][j] != 0) isZero = 0;
    if(isZero) {
        printf("Zero Matrix\n");
        printf("Null Matrix\n");
    }

    if(r1 == c1) {

        int isIdentity = 1;
        for(i = 0; i < r1; i++)
            for(j = 0; j < c1; j++)
                if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
                isIdentity = 0;
        if(isIdentity)
            printf("Identity Matrix\n");

        int isDiag = 1;
        for(i = 0; i < r1; i++)
            for(j = 0; j < c1; j++)
                if(i != j && a[i][j] != 0) isDiag = 0;
        if(isDiag)
            printf("Diagonal Matrix\n");

        int isScalar = 1;
        
        int val = a[0][0];
        for(i = 0; i < r1; i++)
            for(j = 0; j < c1; j++)
                if((i == j && a[i][j] != val) || (i != j && a[i][j] != 0))
                isScalar = 0;
        if(isScalar)
            printf("Scalar Matrix\n");
        int isUpper = 1;
        for(i = 0; i < r1; i++)
            for(j = 0; j < i; j++)
                if(a[i][j] != 0) isUpper = 0;
        if(isUpper)
            printf("Upper Triangular Matrix\n");

        int isLower = 1;
        for(i = 0; i < r1; i++)
            for(j = i + 1; j < c1; j++)
                if(a[i][j] != 0) isLower = 0;
        if(isLower)
            printf("Lower Triangular Matrix\n");
        int isSym = 1;
        for(i = 0; i < r1; i++)
            for(j = 0; j < c1; j++)
                if(a[i][j] != a[j][i]) isSym = 0;
        if(isSym)
            printf("Symmetric Matrix\n");

        int isSkew = 1;
        for(i = 0; i < r1; i++)
            for(j = 0; j < c1; j++)
                if(a[i][j] != -a[j][i]) isSkew = 0;
        if(isSkew)
            printf("Skew-Symmetric Matrix\n");

        int det = 0;
        if(r1 == 1)
            det = a[0][0];
        else if(r1 == 2)
            det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
        else if(r1 == 3)
            det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
                - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
                + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
        if(r1 <= 3) {
            if(det == 0)
                printf("Singular Matrix (det = 0)\n");
            else
                printf("Non-Singular Matrix (det = %d)\n", det);
        } else {
            printf("Singular check skipped (only supported up to 3x3)\n");
        }
    }

    printf("\nComparing Matrix A and B\n");
    if(r1 == r2 && c1 == c2) {
        int isEqual = 1;
        for(i = 0; i < r1; i++)
            for(j = 0; j < c1; j++)
                if(a[i][j] != b[i][j]) isEqual = 0;
        if(isEqual)
            printf("Equal Matrices\n");
        else
            printf("Not Equal Matrices\n");
    } else {
        printf("Different orders so we caannot compare\n");
    }
    }