/* Progrma to convert the given temperature in fahrenheit to celsius */
#include<stdio.h>
#define F_LOW 0                 /* __________________ */
#define F_MAX 250               /* SYMBOLIC CONSTANTS */
#define STEP 25                 /* __________________ */

void main()
{
    typedef float REAL;         /* TYPE DEFINITION */
    REAL fahrenheit, celsius;   /* DECLARATION */

    fahrenheit = F_LOW;         /* INITIALIZATION */
    printf("Fahrenheit  Celcius\n\n");
    while( fahrenheit <= F_MAX)
    {
        celsius = ( fahrenheit - 32.0 ) / 1.8;
        printf(" %5.1f %11.2f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + STEP;
    }
}