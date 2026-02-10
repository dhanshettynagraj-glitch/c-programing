#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            break;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Equal\n");
    } else if (str1[i] > str2[i]) {
        printf("First string is greater\n");
    } else {
        printf("Second string is greater\n");
    }
    return 0;
}