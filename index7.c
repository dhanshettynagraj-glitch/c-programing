#include <stdio.h>
int main() {
    float c, f;
    printf("enter temparature in celsius:");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("fahrenheit = %.2f" , f);
    return 0;
}