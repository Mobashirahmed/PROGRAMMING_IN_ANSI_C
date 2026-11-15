/* WAP to read a four digit integer and print the sum of its digits. */

#include<stdio.h>

int main()
{
    int num, sum = 0, digit;

    printf("Enter a four-digit integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}