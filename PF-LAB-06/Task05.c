#include <stdio.h>
int main() {
  int daily, day = 0, total = 0, avg;
  while (daily != -999) {
    printf("Enter your daily power consumption ");
    scanf("%d", &daily);
    if (daily != -999) {
      total = total + daily;
      day++;
    }
  }
  avg = total / day;
  printf("Your average power consumption is %d for %d days", avg, day);
}