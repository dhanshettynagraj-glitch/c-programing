#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    

    for (int i = 0; str[i] != '\0'; i++) {
    
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = '*';  
        }
    }
    
    printf("Modified string: %s\n", str);
    
    return 0;
}