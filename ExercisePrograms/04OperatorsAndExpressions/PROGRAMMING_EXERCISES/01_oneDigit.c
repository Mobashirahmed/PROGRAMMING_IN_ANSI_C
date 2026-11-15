/* WAP that reads a floating-point number and then displays the rightmost digit of the integral part of the number */
#include <stdio.h>

int main() {
    float num;
    int integralPart;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    integralPart = (int)num;
    printf("The rightmost digit of the integral part is: %d\n", integralPart % 10);

    return 0;
}