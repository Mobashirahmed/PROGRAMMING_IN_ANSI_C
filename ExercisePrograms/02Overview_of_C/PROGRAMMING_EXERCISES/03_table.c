/* Write a program to output the multiplication table of 5. */
#include<stdio.h>
int main(){
    int num = 5;
    printf("      Table of 5\n");
    for(int i=1; i<=10; i++){
        printf("%8d*%d=%2d\n", num, i, num*i);
    }
    return 0;
}