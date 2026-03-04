#include <stdio.h>
int main() {
  int i;
  float salary;
  printf("Enter your salary ");
  scanf("%f", &salary);
  for (i = 1; i < 10; i++) {
    salary = salary * 1.05;
  }
  printf("Your salary after %d years is equal to %.2f", i, salary);
}