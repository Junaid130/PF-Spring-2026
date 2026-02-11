#include <stdio.h>
int main() {
  float bill, price;
  printf("How much is your bill? ");
  scanf("%f", &bill);
  if (bill >= 5000) {
    printf("20 percent discount\n");
    price = bill - (bill * 0.2);
    printf("You need to pay %.2f", price);
  } else {
    if (bill >= 3000) {
      printf("10 percent discount\n");
      price = bill - (bill * 0.1);
      printf("You need to pay %.2f", price);
    } else {
      printf("no disocunt\n");
      printf("You need to pay %.2f", bill);
    }
  }
}