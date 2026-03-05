#include <stdio.h>

int main() {
  int pin;
  int actualpin = 5555;

  printf("Enter PIN: ");
  scanf("%d", &pin);

  while (pin != actualpin) {
    printf("Incorrect PIN. Try again: ");
    scanf("%d", &pin);
  }

  printf("Access Granted\n");
}