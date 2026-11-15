/* The cost of one type of mobile service is Rs.250 plus 1.25 for each call made over and above 100 calls.
WAP to read customer codes and calls made and print the bill for each customer.
*/
#include<stdio.h>

int main() {
    int customerCode, callsMade;
    float billAmount;

    printf("Enter customer code: ");
    scanf("%d", &customerCode);

    printf("Enter number of calls made: ");
    scanf("%d", &callsMade);

    if (callsMade <= 100) {
        billAmount = 250.0; // Base cost for up to 100 calls
    } else {
        billAmount = 250.0 + (callsMade - 100) * 1.25; // Additional cost for calls over 100
    }

    printf("Customer Code:         %d\n", customerCode);
    printf("Number of Calls Made:  %d\n", callsMade);
    printf("Total Bill Amount: Rs. %.2f\n", billAmount);

    return 0;
}