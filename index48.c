#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    
    printf("Characters at even indices: ");
    for (int i = 0; str[i] != '\0'; i += 2) {
        printf("%c ", str[i]);
    }
    printf("\n");
    
    return 0;
}