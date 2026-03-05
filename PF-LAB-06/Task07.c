#include <stdio.h>

int main() {
  char choice;

  do {
    printf("\n1. Issue Book\n2. Return Book\n3. Exit\nEnter choice: ");
    scanf(" %c", &choice);

    switch (choice) {
    case '1':
      printf("Book Issued\n");
      break;
    case '2':
      printf("Book Returned\n");
      break;
    case '3':
      printf("Exitied\n");
      break;
    default:
      printf("Invalid choice, try again.\n");
    }
  } while (choice != '3');
}