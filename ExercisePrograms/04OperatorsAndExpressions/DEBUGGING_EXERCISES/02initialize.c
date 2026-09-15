#include<stdio.h>

int main()
{
    int m, n; // Declaring the variables
    if(m == 1 & n != 0)
    printf("OK");
}

/* errors:
    1. 'm' undeclared
    2. 'n' undeclared
    On declaring the variables the error can be resolved
    But the condition of 'if' statement cannot be evaluated until the variables are initialized with some value */