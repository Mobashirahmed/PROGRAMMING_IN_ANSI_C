/* WAP that reads two numbers and performs their division. If the division is not possible, then an error message, 'Division not possible' is displayed */
#include<stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num2 == 0) {
        printf("Division not possible.\n");
    } else {
        result = num1 / num2;
        printf("Result: %.2f\n", result);
    }

    return 0;
}