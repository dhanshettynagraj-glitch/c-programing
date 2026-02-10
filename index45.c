#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    
    int upper = 0, lower = 0, digit = 0, special = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) upper++;
        else if (islower(str[i])) lower++;
        else if (isdigit(str[i])) digit++;
        else special++;
    }
    
    printf("Uppercase: %d\n", upper);
    printf("Lowercase: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Special characters: %d\n", special);
    return 0;
}