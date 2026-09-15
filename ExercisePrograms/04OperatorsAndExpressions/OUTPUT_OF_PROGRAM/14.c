#include<stdio.h>

int main()
{
    unsigned x = 1;
    signed char y = -1;

    if(x > y)
        printf(" x > y");
    else
        printf("x<= y");
}
/*
Since unsigned cannot represent negative numbers, -1 gets converted into a huge positive number, and that makes the comparison false.

That is why the else block executes instead of the if block.
*/