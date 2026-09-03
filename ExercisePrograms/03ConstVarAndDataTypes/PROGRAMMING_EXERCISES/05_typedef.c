/* Write a program to illustrate the use of typedef declaration in a program. */
#include<stdio.h>
int main()
{
    typedef int roll;
    typedef float marks;

    roll student1, student2;
    marks subject1, subject2;

    student1 = 265073;
    student2 = 265974;
    subject1 = 78.93;
    subject2 = 82.64;

    printf("\t%d %d\n", student1, student2);
    printf("\t%.2f %7.2f", subject1, subject2);
    return 0;
}