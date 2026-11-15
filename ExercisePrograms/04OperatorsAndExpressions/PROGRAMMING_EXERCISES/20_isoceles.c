/* WAP to input the sides of a triangle and determine whether the triangle is isosceles or not */
#include<stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check for isosceles triangle
    if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is not isosceles.\n");
    }

    return 0;
}