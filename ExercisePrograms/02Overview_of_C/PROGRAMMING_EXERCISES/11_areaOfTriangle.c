/* Write a program to compute the area of the given triangle given the values of a, b and c by the user. */
#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, s, area;
    printf("Enter the side lengths of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle: %.2f sq. meters.", area);
}