/* Given three values, WAP to read three values from keyboard and print out the largest of them without using if statement */
#include<stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The largest number is: %d\n", largest);

    return 0;
}