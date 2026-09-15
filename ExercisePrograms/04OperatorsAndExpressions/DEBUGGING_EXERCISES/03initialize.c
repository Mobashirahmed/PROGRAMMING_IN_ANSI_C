#include<stdio.h>

int main()
{
    int x; // Declaring the variable
    // if(x=<5)
    if(x<=5)
    printf("Jump");
}

/* errors:
    1. 'x' undeclared
    This error can be resolved by declaring the variable x
    2. expected expression before '<' token
    This error can be resolved by correctly inscribing the token '<=' in place of '=<' */