#include <stdio.h>

int main() {
    void *ptr;
    int vibration = 850;
    float temp = 75.0;
    char status = 'W';

    ptr = &vibration;
    printf("Vibration: %d Address: %p\n", *(int *)ptr, (void *)ptr);

    ptr = &temp;
    printf("Temp: %.2f Address: %p\n", *(float *)ptr, (void *)ptr);

    ptr = &status;
    printf("Status: %c Address: %p\n", *(char *)ptr, (void *)ptr);

    if (*(char *)ptr == 'N') {
        printf("Normal\n");
    } else if (*(char *)ptr == 'W') {
        printf("Warning\n");
    } else if (*(char *)ptr == 'C') {
        printf("Critical\n");
    }

    return 0;
}