#include <math.h>
#include <stdio.h>

int main() {
  int x;
  double a, b, result;

  printf("Enter two numbers: ");
  scanf("%lf %lf", &a, &b);

  printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. "
         "Square Root\n6. Power\n7. Logarithm\n8. Absolute Value\n9. Sine\n10. "
         "Cosine\n11. Tangent\n");
  printf("Select an option: ");
  scanf("%d", &x);

  switch (x) {
  case 1:
    result = a + b;
    printf("Result: %.2f\n", result);
    break;
  case 2:
    result = a - b;
    printf("Result: %.2f\n", result);
    break;
  case 3:
    result = a * b;
    printf("Result: %.2f\n", result);
    break;
  case 4:
    if ((b != 0) && (a != 0)) {
      result = a / b;
      printf("Result: %.2f\n", result);
    } else {
      printf("Error: Division by zero!\n");
    }
    break;
  case 5:
    if (a >= 0) {
      printf("Square Root of %.2f: %.2f\n", a, sqrt(a));
    } else {
      printf("Square root of negative numbers is not allowed\n");
    }
    break;
  case 6:
    result = pow(a, b);
    printf("%.2f raised to %.2f: %.2f\n", a, b, result);
    break;
  case 7:
    if (a > 0) {
      printf("Logarithm of %.2f: %.2f\n", a, log10(a));
    } else {
      printf("Logarithm of zero or negative is not allowed\n");
    }
    break;
  case 8:
    printf("Absolute value of %.2f: %.2f\n", a, fabs(a));
    break;
  case 9:
    printf("Sine of %.2f: %.2f\n", a, sin(a));
    break;
  case 10:
    printf("Cosine of %.2f: %.2f\n", a, cos(a));
    break;
  case 11:
    printf("Tangent of %.2f: %.2f\n", a, tan(a));
    break;
  default:
    printf("Invalid option or feature not yet implemented.\n");
  }

  return 0;
}