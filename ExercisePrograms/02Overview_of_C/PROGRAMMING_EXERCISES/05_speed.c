/* Write a C program that reads the value of distance travelled by a car and the time taken for the same.
Next, compute the speed at which the car travelled. */
#include<stdio.h>
int main(){
    float d, t, s;
    
    printf("Enter the distance travelled by the car(in m): ");
    scanf("%f", &d);
    printf("Enter the time taken to cover that distance(in secs): ");
    scanf("%f", &t);

    s = d / t;
    printf("Speed of car(in m/sec): %f", s);
}