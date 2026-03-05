#include <stdio.h>

int main() {
  int N, i;
  int total = 0, ticket;

  printf("Enter the number of tickets N: ");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    ticket = i * 100;
    total += ticket;
  }

  printf("Total revenue for %d tickets: $%d\n", N, total);
}