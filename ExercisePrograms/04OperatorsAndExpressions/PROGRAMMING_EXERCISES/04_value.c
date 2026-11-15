/* The straight-line method of computing the yearly depreciation of the value of an item is given by
                    Depreciation = (PurchasePrice-SalvageValue)/YearsofService
WAP to determine the salvage value of an item when the purchase price, years of service and the annual depreciation are given. */
#include<stdio.h>

int main()
{
    float Depreciation, purchasePrice, salvageValue;
    int yearsOfService;

    Depreciation = 100.0;
    purchasePrice = 1000.0;
    yearsOfService = 5;
    
    salvageValue = purchasePrice - (Depreciation * yearsOfService);
    printf("The salvage value of the item is: %.2f\n", salvageValue);
    
    return 0;
}