/* WAP that reads a floating-point number and then display the two right-most digits of the integral part of the number */
#include <stdio.h>

int main() {
    float num;
    int integralPart;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    integralPart = (int)num;
    printf("The two rightmost digits of the integral part are: %02d\n", integralPart % 100);

    return 0;
}