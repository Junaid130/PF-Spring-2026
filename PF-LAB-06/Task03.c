#include <stdio.h>
int main() {
  int code = 2468, correct = 0, temp;
  do {
    printf("Enter the code ");
    scanf("%d", &temp);
    if (temp == code) {
      correct = 1;
    } else {
      printf("Code is incorrect try again\n");
    }
  } while (correct == 0);
  printf("Unlocked");
}