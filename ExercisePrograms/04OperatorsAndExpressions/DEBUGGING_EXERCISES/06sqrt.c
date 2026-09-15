#include<math.h>
int main()
{
    // y = sqrt(100);
    int y = sqrt(100);
}

/* errors:
    1. 'y' undeclared
    Resolved by declaring the variable
    2. implicit declaration of function 'sqrt'
    Resolved by including the '<math.h>' file */