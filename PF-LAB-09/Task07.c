#include <stdio.h>

int main() {
    int marks[6] = {20, 60, 5, 50, 28, 55};
    int *p = marks;
    int max = *p;
    int i;

    printf("\nOld marks: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }

    for (i = 1; i < 6; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }

    for (i = 0; i < 6; i++) {
        float calc = ((float)*(p + i) / max) * 100;
        *(p + i) = (int)calc;
    }

    printf("\nNew marks: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}