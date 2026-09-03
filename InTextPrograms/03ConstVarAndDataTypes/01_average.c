/* A program to calculate the average of a set of N numbers */
#include<stdio.h>
#define N 10                       /* SYMBOLIC CONSTANT */

void main()
{
    int count;                      /* DECLARATION OF */
    float sum, average, number;     /* VARIABLES */
    sum = 0;                        /* INITIALIZATION */
    count = 0;                      /* OF VARIABLES */
    while(count < N)
    {
        scanf("%f", &number);
        sum = sum + number;
        count = count + 1;
    }
    average = sum/N;
    printf("N = %d Sum = %f", N, sum);
    printf(" Average = %.3f", average);
}