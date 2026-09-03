/* Write a program to compute D (diastance between two points) given the coordinates of the points */
#include<stdio.h>
#include<math.h>

int main(){
    int x1, x2, x, y1, y2, y, d;
    float D;

    printf("Enter the value of x1: ");
    scanf("%d", &x1);
    printf("Enter the value of x2: ");
    scanf("%d", &x2);
    printf("Enter the value of y1: ");
    scanf("%d", &y1);
    printf("Enter the value of y2: ");
    scanf("%d", &y2);

    x = (x2-x1)*(x2-x1);
    y = (y2-y1)*(y2-y1);
    d = x+y;
    D = sqrt(d);

    printf("Distance between the two points: %.2f", D);
    return 0;
}