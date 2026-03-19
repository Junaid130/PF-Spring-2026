#include <stdio.h>

int main() {
   int a[3][3], b[3][3], c[3][3];
   int r1, c1, r2, c2;
   int i, j, k;

   printf("Enter rows and columns of Matrix A (max 3): ");
   scanf("%d %d", &r1, &c1);

   printf("Enter rows and columns of Matrix B (max 3): ");
   scanf("%d %d", &r2, &c2);

   if(c1 != r2) {
      printf("Multiplication not possible! Columns of A (%d) != Rows of B (%d)\n", c1, r2);
   } else {

      printf("Enter elements of Matrix A:\n");
      for(i = 0; i < r1; i++)
         for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

      printf("Enter elements of Matrix B:\n");
      for(i = 0; i < r2; i++)
         for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

      for(i = 0; i < r1; i++)
         for(j = 0; j < c2; j++) {
            c[i][j] = 0;
            for(k = 0; k < c1; k++)
               c[i][j] += a[i][k] * b[k][j];
         }

      printf("\nMatrix A:\n");
      for(i = 0; i < r1; i++) {
         for(j = 0; j < c1; j++)
            printf("%4d", a[i][j]);
         printf("\n");
      }

      printf("\nMatrix B:\n");
      for(i = 0; i < r2; i++) {
         for(j = 0; j < c2; j++)
            printf("%4d", b[i][j]);
         printf("\n");
      }

      printf("\nResult A x B:\n");
      for(i = 0; i < r1; i++) {
         for(j = 0; j < c2; j++)
            printf("%4d", c[i][j]);
         printf("\n");
      }
   }
}