/*________ PROGRAM USING FUNCTION ________*/
#include<stdio.h>
/*________ FUNCTION DECLARATION ________*/
int mul(int a, int b);
int p;
/*________ MAIN PROGRAM BEGINS ________*/
int main()
{
    int a, b, c;
    a = 5;
    b = 10;
    c = mul(a,b);
    printf("multiplication of %d and %d is %d", a, b, c);
}
/*__________ MAIN PROGRAM ENDS __________*/
/*________ MUL() FUNCTION STARTS ________*/
int mul(int x, int y)
{
    p = x*y;
    return(p);
}
/*________ MUL() FUNCTION ENDS ________*/