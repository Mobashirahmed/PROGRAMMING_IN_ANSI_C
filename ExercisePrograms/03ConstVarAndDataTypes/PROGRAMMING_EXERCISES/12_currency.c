/* Write a C program to input the amount value and break it into the smallest possible Indian currency */
#include<stdio.h>

int main()
{
    int amount, two_thousand, five_hundred, two_hundred, hundred, fifty, twenty, ten, five, two, one;

    printf("Enter the amount (in INR)\n");
    scanf("%d", &amount);

    two_thousand = amount / 2000;
    amount = amount % 2000;
    five_hundred = amount / 500;
    amount = amount % 500;
    two_hundred = amount / 200;
    amount = amount % 200;
    hundred = amount / 100;
    amount = amount % 100;
    fifty = amount / 50;
    amount = amount % 50;
    twenty = amount / 20;
    amount = amount % 20;
    ten = amount / 10;
    amount = amount % 10;
    five = amount / 5;
    amount = amount % 5;
    two = amount / 2;
    amount = amount % 2;
    one = amount / 1;

    printf("Two thousands rupee notes:  %d\n", two_thousand);
    printf("Five hundreds rupee notes:  %d\n", five_hundred);
    printf("Two hundreds rupee notes:   %d\n", two_hundred);
    printf("One hundred rupee notes:    %d\n", hundred);
    printf("Fifty rupee notes:          %d\n", fifty);
    printf("Twenty rupee notes:         %d\n", twenty);
    printf("Ten rupee notes:            %d\n", ten);
    printf("Five rupee coins:           %d\n", five);
    printf("Two rupee coins:            %d\n", two);
    printf("One rupee coins:            %d\n", one);

    return 0;
}