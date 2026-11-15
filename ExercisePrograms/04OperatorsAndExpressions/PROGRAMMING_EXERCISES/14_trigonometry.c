/* WAP to print a table of sin and cos functions for the interval 0 to 180 degrees in increments of 15 degrees */
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

int main() {
    int angle;
    double radians, sinValue, cosValue;

    printf("Angle (degrees)\tSin\tCos\n");
    printf("----------------------------------------\n");

    for (angle = 0; angle <= 180; angle += 15) {
        radians = angle * (PI / 180.0); // Convert degrees to radians
        sinValue = sin(radians);
        cosValue = cos(radians);

        printf("%3d\t\t%.4f\t%.4f\n", angle, sinValue, cosValue);
    }

    return 0;
}