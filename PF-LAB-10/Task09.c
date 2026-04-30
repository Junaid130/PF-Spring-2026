#include <stdio.h>

int main() {
    FILE *meow;
    int maxcores = 2;
    float maxspeed = 2.5;
    char isthreading[20] = "Enabled";

    meow = fopen("config.txt", "r");

    if (meow == NULL) {
        printf("No file found! Creating default config...\n");
        meow = fopen("config.txt", "w");
        if (meow != NULL) {
            fprintf(meow, "max_cores: %d\nmax_speed: %.2f\nis_threading: %s\n", maxcores, maxspeed, isthreading);
            fclose(meow);
        }
    } else {
        printf("Config file found! Loading...\n");
        
        if (fscanf(meow, "max_cores: %d\nmax_speed: %f\nis_threading: %s", &maxcores, &maxspeed, isthreading) >= 1) {
            printf("Max Cores: %d\n", maxcores);
            printf("Max Speed: %.2f GHz\n", maxspeed);
            printf("Threading: %s\n", isthreading);
        }
        fclose(meow);
    }
    return 0;
}