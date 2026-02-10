#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0') len++;
    if (str[len-1] == '\n') len--;
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) {
            isPalindrome = 0;
            break;
        }
    }
    printf("%s\n", isPalindrome ? "Palindrome" : "Not a palindrome");
    return 0;
}