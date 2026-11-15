/* WAP to read three values using scanf statement and print the following results:
    (a) Sum of the values
    (b) Average of the three values
    (c) Largest of the three
    (d) Smallest of the three
*/
#include<stdio.h>

int main() {
    int a, b, c;
    int sum, largest, smallest;
    float avg;

    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = (float)sum / 3.0;
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("Sum:      %d\n", sum);
    printf("Average:  %.2f\n", avg);
    printf("Largest:  %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}