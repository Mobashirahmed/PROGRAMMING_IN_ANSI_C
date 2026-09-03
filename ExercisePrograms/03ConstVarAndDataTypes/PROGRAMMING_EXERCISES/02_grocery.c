/* The price of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values from the user and display the prices */
#include<stdio.h>
int main()
{
    float p_rice, p_sugar;

    printf("Enter the price of Rice\n");
    scanf("%f", &p_rice);
    printf("Enter the price of Sugar\n");
    scanf("%f", &p_sugar);

    printf("\n***LIST OF ITEMS***\n");
    printf("Item    Price\n");
    printf("Rice    Rs %.2f\n", p_rice);
    printf("Sugar   Rs %.2f\n", p_sugar);

    return 0;
}