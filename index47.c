#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    
    printf("ASCII values:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("'%c' -> %d\n", str[i], (int)str[i]);
    }
    
    return 0;
}