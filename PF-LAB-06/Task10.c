#include <stdio.h>

int main() {
  int rating;
  int exc = 0;
  int sat = 0;
  int ni = 0;

  printf("Enter employee rating (0-100) or -1 to quit: ");
  scanf("%d", &rating);

  while (rating != -1) {
    if (rating >= 85) {
      exc++;
    } else if (rating >= 60) {
      sat++;
    } else if (rating >= 0) {
      ni++;
    } else {
      printf("Invalid rating!\n");
    }

    printf("Enter next rating: ");
    scanf("%d", &rating);
  }

  printf("\nTotal Excellent: %d", exc);
  printf("\nTotal Satisfactory: %d", sat);
  printf("\nTotal Needs Improvement: %d\n", ni);
}