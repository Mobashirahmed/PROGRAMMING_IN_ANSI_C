/* Program illustrates the use of integer contants */
#include<stdio.h>
void main()
{
    printf("Integer/long integer values\n\n");
    printf("%d %d %d\n", 2147483647, 2147483647+1, 2147483647+10);
    printf("\n");
    printf("Long-long integer values\n\n");
    printf("%lld %lld %lld\n", 2147483647LL, 2147483647LL+1LL, 2147483647LL+10LL);
}