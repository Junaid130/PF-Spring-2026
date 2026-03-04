#include <stdio.h>
int main() {
  int data = 5000, used;
  while (data > 0) {
    printf("Enter how much data have you used today? ");
    scanf("%d", &used);
    data = data - used;
    printf("Remaining balance = %d \n", data);
  }
}