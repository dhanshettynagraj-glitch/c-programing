#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    
    if (strlen(str) == 0) {
        printf("Invalid: Empty string\n");
        return 0;
    }
    
    // First character must be letter or underscore
    if (!(isalpha(str[0]) || str[0] == '_')) {
        printf("Invalid: Must start with letter or underscore\n");
        return 0;
    }
    
    // Remaining characters must be letters, digits, or underscores
    for (int i = 1; str[i] != '\0'; i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            printf("Invalid: Contains invalid character '%c'\n", str[i]);
            return 0;
        }
    }
    
    printf("Valid C identifier\n");
    return 0;
}