#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    char *word = strtok(str, " \n");
    char *smallest = NULL, *largest = NULL;
    int minLen = 1000, maxLen = 0;
    while (word != NULL) {
        int len = strlen(word);
        if (len < minLen) {
            minLen = len;
            smallest = word;
        }
        if (len > maxLen) {
            maxLen = len;
            largest = word;
        }
        word = strtok(NULL, " \n");
    }
    printf("Smallest word: %s\nLargest word: %s\n", smallest, largest);
    return 0;
}