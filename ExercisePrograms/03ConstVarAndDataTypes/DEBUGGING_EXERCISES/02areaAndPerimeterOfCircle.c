#include<stdio.h>
#define PI 3.14159
main()
{
    int R, C;           /*R-Radius of circle */
    float perimeter;    /* Circumference of circle */
    float area;         /* Area of circle */
    // C = PI
    C = PI;
    R = 5;
    // Perimeter = 2.0 * C * R;
    // Area = C*R*R;
    perimeter = 2.0 * PI * R;
    area = PI*R*R;
    // printf("%f", "%d", &perimeter, &area);
    printf("%f %f", perimeter, area);
}

/* errors:
    1. linking the stdio.h header file was left out
    2. the main function should have a return type
    3. the first comment line was not closed properly
    4. the initialization of variable C was not completed with a semi-colon and in the initialization a float value was assigned to an integer variable
    5. the variable names perimeter and area were not consistent with the case used in their declaration
    6. the value of PI being converted to integer before assigning to the variable C and this integer value was used in the calculation of perimeter and area. Hence, the result will not be accurate. Instead the constant PI should be used in the calculation.
    7. the printf statement was not properly formatted, the format specifiers were not consistent with the data types of the variables being printed and the address operator was used instead of passing the variables directly.
*/