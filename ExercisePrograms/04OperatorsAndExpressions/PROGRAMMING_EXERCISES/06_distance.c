/* The total distance travelled by a vehicle in t seconds is given by
    distance = ut+(at²)/2
   Where u is the initial velocity (metres per second) and a is the acceleration (metres per second²).
   WAP to evaluate the distance travelled at regular intervals of time, given the values of u and a.
   The program should provide the flexibility to the user to select his own time intervals and repeat the calculations for different values of u and a. */

#include<stdio.h>
int main()
{
    float u, a, t, distance;
    char choice;

    do {
        printf("Enter initial velocity (u) in m/s: ");
        scanf("%f", &u);
        printf("Enter acceleration (a) in m/s^2: ");
        scanf("%f", &a);
        printf("Enter time interval (t) in seconds: ");
        scanf("%f", &t);

        distance = u * t + (a * t * t) / 2;
        printf("Distance travelled in %.2f seconds is: %.2f meters\n", t, distance);

        printf("Do you want to calculate for different values of u and a? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');

    return 0;
}