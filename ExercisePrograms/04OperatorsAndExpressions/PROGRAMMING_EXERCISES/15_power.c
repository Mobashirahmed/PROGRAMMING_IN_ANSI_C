/* WAP to compute the values of sqaure-roots and squares of the numbers 0 to 100 in steps of 10 and print the output in tabular form. */
#include<stdio.h>
#include<math.h>

int main() {
    int number;
    double squareRoot, square;

    printf("Number\tSquare Root\tSquare\n");
    printf("----------------------------------------\n");

    for (number = 0; number <= 100; number += 10) {
        squareRoot = sqrt(number);
        square = pow(number, 2);

        printf("%3d\t%.4f\t\t%.4f\n", number, squareRoot, square);
    }

    return 0;
}