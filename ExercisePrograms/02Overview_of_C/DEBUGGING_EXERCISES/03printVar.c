#include<stdio.h>
// Include <math.h>
#include<math.h>
// main()
void main()
{
    // FLOAT X;
    float X;
    float Y;
    X = 2.5;
    // Y = exp(x);
    Y = exp(X);
    // Print(x,y);
    printf("%.1f, %.1f", X, Y);
}

/* errors:
    1. the pre-processive directive was incorrectly written; the first letter include should not be capitalised and the operator # was missing
    2. including the stdio.h header file was also missing
    3. return type of main() fuction was missing
    4. data type keyword was in upper-case, it should be in lowercase always
    5. the variable 'Y' was not pre-declared before initialization
    6. the formatted output function was not correctly typed
    7. the printf function takes a string argument not float values, format specifiers are necessary for printing the float values stored in the variables */