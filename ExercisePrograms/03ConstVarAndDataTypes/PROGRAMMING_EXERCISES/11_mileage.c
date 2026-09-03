/* Write a C program to input the distance travelled by a car and the fuel consumed.
Next, compute the mileage of the car. */
#include<stdio.h>

int main()
{
    double distance, fuel_consumed, mileage;

    printf("Enter the distance travelled by the car (in miles)\n");
    scanf("%lf", &distance);
    printf("Enter the fuel consumed by the car (in litres)\n");
    scanf("%lf", &fuel_consumed);

    mileage = distance/fuel_consumed;
    printf("Mileage of the car:\t%lf miles/litre", mileage);

    return 0;
}