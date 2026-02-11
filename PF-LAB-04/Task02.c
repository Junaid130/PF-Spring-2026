#include <stdio.h>
int main() {
  int units;
  printf("Enter your units: ");
  scanf("%d", &units);
  if (units <= 100) {
    printf("Low Usage");
  } else if (units <= 300) {
    printf(" Medium Usage");
  } else {
    printf("High Usage");
  }
}