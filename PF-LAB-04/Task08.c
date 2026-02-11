#include <math.h>
#include <stdio.h>
int main() {
  int choice;
  float num1, num2;
  printf("Enter a choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n"
         "4. Division\n5. Square of a number\n6. Cube of a number\n"
         "7. Square Root of a number\n8. Power (x^y)\n9. Absolute Value\n");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("Enter two numbers ");
    scanf("%f %f", &num1, &num2);
    printf("Result is %f", num1 + num2);
    break;

  case 2:
    printf("Enter two numbers ");
    scanf("%f %f", &num1, &num2);
    printf("Result is %f", num1 - num2);
    break;

  case 3:
    printf("Enter two numbers ");
    scanf("%f %f", &num1, &num2);
    printf("Result is %f", num1 * num2);
    break;

  case 4:
    printf("Enter two numbers ");
    scanf("%f %f", &num1, &num2);
    if (num2 != 0) {
      printf("Result is %f", num1 / num2);
    } else {
      printf("Division by zero error");
    }
    break;

  case 5:
    printf("Enter a number ");
    scanf("%f", &num1);
    printf("Result is %f", num1 * num1);
    break;

  case 6:
    printf("Enter a number ");
    scanf("%f", &num1);
    printf("Result is %f", num1 * num1 * num1);
    break;

  case 7:
    printf("Enter a number ");
    scanf("%f", &num1);
    if (num1 >= 0) {
      printf("Result is %f", sqrt(num1));
    } else {
      printf("Negative number error");
    }
    break;

  case 8:
    printf("Enter two numbers ");
    scanf("%f %f", &num1, &num2);
    printf("Result is %f", pow(num1, num2));
    break;

  case 9:
    printf("Enter a number ");
    scanf("%f", &num1);
    printf("Result is %f", fabs(num1));
    break;

  default:
    printf("Invalid choice Try again");
  }
}
