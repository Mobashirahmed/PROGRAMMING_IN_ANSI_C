/* Write a C program to input the value of days and convert it into years, weeks and days. */
#include<stdio.h>

int main()
{
    int days, years, weeks;

    printf("Enter the number of days\n");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    days = days % 7;
    printf("%d years, %d weeks and %d days", years, weeks, days);

    return 0;
}