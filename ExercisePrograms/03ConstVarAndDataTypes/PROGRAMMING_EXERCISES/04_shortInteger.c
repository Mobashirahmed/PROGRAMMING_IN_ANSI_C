/* Write a program to do the following:
    (a) Declare x and y as integer variables and z as a short integer variable
    (b) Assign two 6 digit numbers to x and y
    (c) Assign the sum of x and y to z
    (d) Output rhe values of x, y, z
        Comment on the output. */

#include<stdio.h>
int main()
{
    int x, y;
    short z;

    x = 123456;
    y = 543210;
    z = x + y;

    printf("x = %d\ny = %d\nz = %d\n", x, y, z);
    // printf("size of x = %zu\nsize of y = %zu\nsize of z = %zu", sizeof(x), sizeof(y), sizeof(z));
    return 0;
}

/* The size of short is 2 bytes meaning 16 bits and range of values it can store is -32768 to 32767.
Thus, to store the sum of x and y ,i.e., 666666, that is larger than its range; it will overflow.
About 20 circular overflows the value 666666 will be pointed to 11306 in the machine. */