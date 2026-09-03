/* Write a program to determine and print the sum of the following harmonic series for a given value of n
            1+ 1/2+ 1/3+ ...+ 1/n */
#include<stdio.h>
#define N 10

int main()
{
    float sum = 0.0;
    for(int i = 1; i <= N; i++)
    {
        sum = sum + 1.0/i;
        // printf("%d %f\n", i, 1.0/i);
    }
    printf("for n = 10\n");
    printf("the sum of the harmonic series is %f", sum);
    return 0;
}