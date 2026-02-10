#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    int freq1[256] = {0}, freq2[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) freq1[(unsigned char)str1[i]]++;
    for (int i = 0; str2[i] != '\0'; i++) freq2[(unsigned char)str2[i]]++;
    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }
    printf("%s\n", isAnagram ? "Anagrams" : "Not anagrams");
    return 0;
}