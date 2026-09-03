/* Write a C program too input an integer and print its table. */
#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter an Integer\n");
    scanf("%d", &num);

    for(int i = 1; i<=10; i++)
    {
        printf("\t%2d*%2d=%3d\n", num, i, num*i);
    }

    return 0;
}