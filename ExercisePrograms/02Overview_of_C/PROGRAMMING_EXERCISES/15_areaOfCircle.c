/* Write a program to compute the area of the circle. */
#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    int x1, x2, x, y1, y2, y, d;
    float D, R, area;

    x1 = 2;
    y1 = 2;
    x2 = 5;
    y2 = 6;
    x = (x2-x1)*(x2-x1);
    y = (y2-y1)*(y2-y1);
    d = x+y;
    D = sqrt(d);
    R = D/2;
    area = PI*R*R;

    printf("Area of the Cirle: %.2f", area);
}