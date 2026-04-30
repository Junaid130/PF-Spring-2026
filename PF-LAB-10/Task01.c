#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {

    char input_name[21];

    printf("Enter name : ");
    // Note: Use [^\n] to capture full names with spaces
    scanf("%[^\n]", input_name);

    int name_length = strlen(input_name);

    // Validate length (Between 3 and 20 characters)
    if(name_length < 3 || name_length > 20) {
        printf("\nInvalid String %d", name_length);
        return 0;
    }

    // Check for leading or trailing whitespace
    if(input_name[0] == ' ' || input_name[name_length - 1] == ' ') {
        printf("\nInvalid String %d", name_length);
        return 0;
    }

    // Ensure no numeric digits are present
    for (int i = 0; i < name_length; i++) {
        if(isdigit(input_name[i])) {
            printf("\nInvalid String %d", name_length);
            return 0;
        }
    }

    printf("Valid string! %d", name_length);
    return 0;
}