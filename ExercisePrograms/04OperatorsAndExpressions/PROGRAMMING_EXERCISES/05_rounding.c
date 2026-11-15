/* WAP that will read a real number from the keyboard and print the following output in one line:
   Smallest integer not less than the number    The given number    Largest integer not greater than the number */

#include<stdio.h>
#include<math.h>

int main()
{
    float num;
    printf("Enter a real number: ");
    scanf("%f", &num);

    printf("%.0f ", ceil(num));
    printf("%f ", num);
    printf("%.0f", floor(num));

    return 0;
}