#include <stdio.h>
#include <string.h>
int main() {
  char username[50], password[50], OTP[50];
  printf("Enter your username ");
  scanf(" %49[^\n]", username); // did thies to avoid /n being inputed.

  if ((strcmp(username, "admin")) == 0) { // strcmp gives 0 when correct

    printf("Enter your password ");
    scanf(" %49[^\n]", password);

    if ((strcmp(password, "123")) == 0) {

      printf("Enter your OTP ");
      scanf(" %49[^\n]", OTP);

      if ((strcmp(OTP, "123")) == 0) {

        printf("Successful");

      } else {
        printf("Incorrect OTP");
      }
    } else {
      printf("Incorrect password");
    }
  } else {
    printf("Incorrect username");
  }
}