#include <stdio.h>
int main() {
    float p, r, t, si;
    printf("enter principle, rate, time");
    scanf("%f %f %f", &p, &r, &r, &t);
    si = (p * r * t) / 100;
    printf("simple interest = %.2f", si);
    return 0;
}