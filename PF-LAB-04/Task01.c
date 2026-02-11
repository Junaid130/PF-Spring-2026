#include <stdio.h>
int main() {
  int attendance;
  printf("Enter your attendance percent: ");
  scanf("%d", &attendance);
  if (attendance >= 75) {
    printf("Eligible for Exam");
  } else {
    printf("Not Eligible for Exam");
  }
}