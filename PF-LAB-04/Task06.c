#include <stdio.h>

int main() {
  int Subject1, Subject2, Subject3, Subject4, Subject5;
  float avg;

  printf("Input marks for Subject 1: ");
  scanf("%d", &Subject1);
  printf("Input marks for Subject 2: ");
  scanf("%d", &Subject2);
  printf("Input marks for Subject 3: ");
  scanf("%d", &Subject3);
  printf("Input marks for Subject 4: ");
  scanf("%d", &Subject4);
  printf("Input marks for Subject 5: ");
  scanf("%d", &Subject5);

  avg = (Subject1 + Subject2 + Subject3 + Subject4 + Subject5) / 5.0;

  if (avg >= 0 && avg <= 100) {
    if (avg >= 85) {
      printf("Grade A");
    } else if (avg >= 70) {
      printf("Grade B");
    } else if (avg >= 50) {
      printf("Grade C");
    } else {
      printf("Fail");
    }
  } else {
    printf("Invalid marks entered");
  }

  return 0;
}