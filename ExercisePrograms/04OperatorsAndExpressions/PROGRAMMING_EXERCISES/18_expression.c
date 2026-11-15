/* WAP to compute the value of an expression x=a-b/3+c*2-1 */
#include<stdio.h>
int main() {
    int a, b, c;
    int x;

    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    x = a - b / 3 + c * 2 - 1; // Compute the expression

    printf("The value of the expression x = a-b/3+c*2-1 is: %d\n", x);

    return 0;
}