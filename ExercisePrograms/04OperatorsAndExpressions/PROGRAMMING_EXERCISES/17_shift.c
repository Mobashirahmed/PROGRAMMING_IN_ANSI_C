/* WAP to shift the given data by two bits to the left */
#include<stdio.h>

int main() {
    int data = 10; // Example data
    int shiftedData = data << 2; // Shift left by 2 bits

    printf("Original Data: %d\n", data);
    printf("Shifted Data: %d\n", shiftedData);

    return 0;
}