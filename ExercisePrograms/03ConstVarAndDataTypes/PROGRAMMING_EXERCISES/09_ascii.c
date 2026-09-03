/* Write a C program to input an integer between 0 and 128 and print its ASCII character. */
#include<stdio.h>

int main()
{
    unsigned num;
    printf("Enter an Integer\n");
    scanf("%u", &num);

    if(num>=0 && num<=128)
    {
        printf("ASCII character for %u is %c", num, num);
    }
    else
    {
        printf("There is no ASCII character for %u", num);
    }

    return 0;
}