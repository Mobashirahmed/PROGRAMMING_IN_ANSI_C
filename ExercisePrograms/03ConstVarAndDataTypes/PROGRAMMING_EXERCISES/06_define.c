/* Write a program to illustrate the use of symbolic constants in real-life application */
#include<stdio.h>
#define PASS_MARK 60

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if(marks >= PASS_MARK)
    {
        printf("You have passed !!");
    }
    else
    {
        printf("You have failed !!");
    }
    return 0;
}