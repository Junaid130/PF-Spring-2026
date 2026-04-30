#include <stdio.h>
#include <string.h>

int main() {
    char words[6][20];
    int seen[6] = {0};

    printf("Enter 6 words:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < 6; i++) {
        // Only process the word if it hasn't been counted yet
        if (seen[i] == 0) {
            int count = 0;

            // Count occurrences across the whole array
            for (int j = 0; j < 6; j++) {
                if (strcmp(words[i], words[j]) == 0) {
                    count++;
                    seen[j] = 1; // Mark this index as "processed"
                }
            }

            printf("\nWord: '%s' | Occurrences: %d\n", words[i], count);

            // Print individual characters
            printf("Character breakdown: ");
            for (int k = 0; words[i][k] != '\0'; k++) {
                printf("[%c]", words[i][k]);
                if (words[i][k+1] != '\0') printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}