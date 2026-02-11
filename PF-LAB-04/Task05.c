#include <stdio.h>
int main() {
  int choice, balance = 120, temp;
  printf("Enter a choice:\n1. Balance Inquiry\n2. Cash Withdrawal\n3. "
         "Deposit\n4. Exit\n");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("Your balance is %d", balance);
    break;

  case 2:
    printf("How much money would you like to withdraw ");
    scanf("%d", &temp);
    if (temp > 0 && temp <= balance) {
      balance = balance - temp;
      printf("Your new balance is %d", balance);
    } else {
      printf("Invalid amount try again");
    }
    break;

  case 3:
    printf("How much money would you like to deposit ");
    scanf("%d", &temp);
    if (temp > 0) {
      balance = balance + temp;
      printf("Your new balance is %d", balance);
    } else {
      printf("Invalid amount try again");
    }
    break;

  case 4:
    printf("Thank you for banking with us");
    break;

  default:
    printf("Invalid choice Try again");
  }
}