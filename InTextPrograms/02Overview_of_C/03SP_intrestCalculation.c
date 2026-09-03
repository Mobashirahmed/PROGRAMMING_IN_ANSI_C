/*________ INVESTMENT PROBLEM ________*/
#include<stdio.h>
#define PERIOD 10
#define PRINCIPAL 5000.00
/*________ MAIN PROGRAM BEGINS ________*/
int main()
{ /*______ DECLARATION STATEMENTS ______*/
    int year;
    float amount, value, inrate;
  /*______ ASSIGNMENT STATEMENTS ______*/
    amount = PRINCIPAL;
    inrate = 0.11;
    year = 0;
  /*______ COMPUTATION STATEMENTS ______*/
  /*___ COMPUTATION USING while LOOP ___*/
    while(year <= PERIOD)
    {
        printf("%2d    %8.2f\n", year, amount);
        value = amount + inrate * amount;
        year = year + 1;
        amount = value;
    }
  /*_________ while LOOP ENDS _________*/
}
/*__________ PROGRAM ENDS __________*/