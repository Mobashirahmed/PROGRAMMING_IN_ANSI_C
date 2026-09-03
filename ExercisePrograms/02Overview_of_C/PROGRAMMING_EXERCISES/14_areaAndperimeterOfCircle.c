/* Write a program to compute perimeter and area of the circle. */
#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    int x1, x2, x, y1, y2, y, r;
    float R, area, perimeter;

    x1 = 0;
    y1 = 0;
    x2 = 4;
    y2 = 5;
    x = (x2-x1)*(x2-x1);
    y = (y2-y1)*(y2-y1);
    r = x+y;
    R = sqrt(r);

    perimeter = 2*PI*R;
    area = PI*R*R;

    printf("Circumference of the Circle: %.2f\n", perimeter);
    printf("Area of the Circle: %.2f", area);
}