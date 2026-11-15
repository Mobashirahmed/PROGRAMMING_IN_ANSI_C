/* Given an integer number, WAP that displays the number as follows:
First line  : all digits
Second line : all except first digit
Third line  : all except first two digits
... ...
Last line   : The last digit
For example, the number 5678 will be displayed as:
5678
678
78
8
*/

#include<stdio.h>

int main()
{
    int num, divisor = 1;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num / divisor >= 10) {
        divisor *= 10;
    }

    while (divisor > 0) {
        printf("%d\n", num % (divisor * 10));
        divisor /= 10;
    }
    
    return 0;
}