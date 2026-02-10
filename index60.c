#include <stdio.h>

int main() {
    char str[1000], oldChar, newChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to replace: ");
    scanf("%c", &oldChar);
    getchar();  // Consume newline
    printf("Enter new character: ");
    scanf("%c", &newChar);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
         }
    printf("Replaced: %s", str);
    return 0;
}