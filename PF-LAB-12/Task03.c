#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *sensorBuffer;

    printf("How many sensors are active? ");
    scanf("%d", &n);

    sensorBuffer = calloc(n, sizeof(float));

    if (sensorBuffer == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nInitial buffer values (pre-reading):\n");
    for (int i = 0; i < n; i++) {
        printf("Sensor %d: %.1f\n", i + 1, sensorBuffer[i]);
    }
    
    printf("\nEnter current temperature readings:\n");
    for (int i = 0; i < n; i++) {
        printf("Reading for Sensor %d: ", i + 1);
        scanf("%f", &sensorBuffer[i]);
    }

    printf("\nData collection complete.\n");

    free(sensorBuffer);
    return 0;
}