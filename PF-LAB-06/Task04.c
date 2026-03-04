#include <stdio.h>
int main() {
  int N, temp, total = 0;
  printf("How many days of running to track? ");
  scanf("%d", &N);
  for (int i = 1; i <= N; i++) {
    printf("\nEnter the kilometers you ran on day %d ", i);
    scanf("%d", &temp);
    total = total + temp;
  }
  printf("You have travelled %d kilometers for %d days", total, N);
}