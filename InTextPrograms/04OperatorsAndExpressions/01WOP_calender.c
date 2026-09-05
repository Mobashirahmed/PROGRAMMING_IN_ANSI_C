/* Program shows the use of integer arithmetic to convert a given number of days into months and days */
#include<stdio.h>
int main()
{
    int months, days;

    printf("Enter days\n");
    scanf("%d", &days);

    months = days / 30 ;
    days = days % 30 ;
    printf("Months = %d Days = %d", months, days);
}