#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (str[length-1] == '\n') length--;
    printf("Length: %d\n", length);
    return 0;
}