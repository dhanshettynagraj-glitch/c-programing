#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    char correct_username[] = "Admin123";

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correct_username) == 0 && strlen(password) > 8) {
        printf("Login successful!\n");
    } else {
        printf("Login failed!\n");
    }

    return 0;
}
