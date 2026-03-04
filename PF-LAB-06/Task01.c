#include <stdio.h>
int main() {
  int x, total = 0;
  for (int i = 1; i <= 25; i++) {
    printf("Has member %d checked in? ", i);
    scanf("%d", &x);
    if (x == 1) {
      total = total + 1;
    }
  }
  printf("Your total sum of people checked in is %d", total);
}