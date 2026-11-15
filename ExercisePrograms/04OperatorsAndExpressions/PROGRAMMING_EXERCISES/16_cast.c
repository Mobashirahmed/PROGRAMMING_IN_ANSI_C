/* WAP to illustrate the use of cast operator in a real life situation */
#include<stdio.h>

int main() {
    int a = 10, b = 3;
    double result;

    // Without cast
    result = a / b;
    printf("Without cast: %lf\n", result);

    // With cast
    result = (double)a / (double)b;
    printf("With cast: %lf\n", result);

    return 0;
}