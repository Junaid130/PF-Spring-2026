#include <stdio.h>

int main() {
    int record[4][5] = {
        {1, 0, 0, 1, 1},
        {0, 1, 1, 0, 0},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1}
    };
    int (*p)[5] = record;

    for (int i = 0; i < 4; i++) {
         int s = 0;
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            int val = (*(p + i))[j];
            printf("%d ", val);
            s = s + val;
        }
        printf("Total: %d", s);
        if (s < 3) {
            printf(" at risk");
        }
        printf("\n");
    }
return 0;
}
