#include <stdio.h>

int main() {
  float price;
  float total = 0;
  int choice;

  do {
    printf("Enter item price: ");
    scanf("%f", &price);

    total = total + price;

    printf("Add another item? (1 = Yes, 0 = No): ");
    scanf("%d", &choice);

  } while (choice == 1);

  printf("\nSubtotal: %.2f", total);

  if (total > 3000) {
    float discount = total * 0.10;
    total = total - discount;
    printf("\n10%% Discount Applied!");
  }

  printf("\nFinal Payable Amount: %.2f\n", total);
}