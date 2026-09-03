/* Write a C program to print the square of a number */
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);

    printf("Square: %d", num*num);
    return 0;
}