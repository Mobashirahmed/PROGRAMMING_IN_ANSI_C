/* Given the values of three variables a, b and c, write a program to compute and display the value of x, where
                x = a/(b-c)
*/
#include<stdio.h>
int main(){
    int a, b, c;
    float x;
    printf("Enter the values of a, b and c, respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    x = a/(b-c);
    printf("Value of x is %.2f", x);
}

/* Output for
    a = 250, b = 85, c = 25 is 4.00
    and for
    a = 300, b = 70, c = 70 is not defined or no output */