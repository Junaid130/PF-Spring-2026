#include <stdio.h>
#include <string.h>

int main() {
    char user_email[100];
    char email_copy[100];
    char display_output[100] = "Email: ";

    printf("Enter your email: ");
    // Note: %s stops at spaces; fine for standard emails
    scanf("%s", user_email);

    // Copying the original email to preserve it
    strcpy(email_copy, user_email);

    // Locate the '@' character
    char *at_symbol_ptr = strchr(email_copy, '@');

    if (at_symbol_ptr == NULL) {
        printf("Invalid Email!\n");
        return 0;
    }

    // Locate the first '.' character
    char *dot_ptr = strstr(email_copy, "."); 

    if (dot_ptr == NULL) {
        printf("Invalid Email!\n");
        return 0;
    }
  
    // The domain starts one character after the '@'
    char *domain_start = (at_symbol_ptr + 1);

    printf("Domain: %s\n", domain_start);

    // Concatenate the label with the original email
    strcat(display_output, user_email);
    printf("%s\n", display_output);

    return 0;
}