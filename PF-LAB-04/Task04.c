#include <stdio.h>
int main() {
  char username[50];
  int password;
  printf("Enter your username ");
  fgets(username, 50, stdin);
  printf("Enter your password ");
  scanf("%d", &password);
  if (username[0] == 'a' && username[1] == 'd' && username[2] == 'm' &&
      username[3] == 'i' && username[4] == 'n' && password == 123) {
    printf("Login Successful");
  } else {
    printf("Invalid Cresidentials");
  }
}