#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // Array to store frequency of each ASCII character
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    
    // Display the frequency of each character
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    
    return 0;
} 