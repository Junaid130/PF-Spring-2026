#include <stdio.h>

int main() {
  int spaces = 50;
  int choice;

  printf("Parking Lot Monitoring System\n");
  printf("Total Spaces Available: %d\n", spaces);

  while (spaces > 0) {
    printf("\nEnter 1 to park a car or 0 to stop: ");
    scanf("%d", &choice);

    if (choice == 0) {
      printf("System stopped by operator.\n");
      break;
    } else if (choice == 1) {
      spaces--;
      printf("Car parked! Remaining spaces: %d\n", spaces);
    } else {
      printf("Invalid input. Use 1 or 0.\n");
    }

    if (spaces == 0) {
      printf("\nLot is now FULL.\n");
    }
  }

  printf("Final status: %d spaces remaining.\n", spaces);
}