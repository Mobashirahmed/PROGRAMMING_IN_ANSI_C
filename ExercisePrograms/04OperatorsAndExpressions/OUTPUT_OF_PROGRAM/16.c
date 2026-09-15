#include<stdio.h>

int main()
{
    int m;

    for(m = 0; m<3; ++m)
        printf("%d\n", (m%2) ? m : m+2);
}