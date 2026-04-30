#include <stdio.h>
#include <string.h>

int main() {
    char secret_password[] = "123helpme";
    int pass_length = strlen(secret_password);
    
    // Size increased by 1 to accommodate the null terminator
    char user_input[pass_length + 1]; 
    int attempt_count = 0;
  
    while(attempt_count < 3) {
        printf("\nPlease enter the password to gain access: \n");
        scanf("%s", user_input);

        if(strlen(user_input) != 0) {
            if (strcmp(secret_password, user_input) == 0) {
                printf("Valid password you can enter!\n");
                return 0;
            } else {
                printf("Wrong password");
            }

            attempt_count++;

            // Give a "Partial Correct" hint on the second failed attempt
            // if the first 3 characters match
            if(attempt_count == 2) {
                if(strncmp(secret_password, user_input, 3) == 0) {
                    printf("\nPartial Correct\n");
                }
            }
      
        } else {
            printf("\nPlease Enter password\n");
        }
    }

    return 0;
}