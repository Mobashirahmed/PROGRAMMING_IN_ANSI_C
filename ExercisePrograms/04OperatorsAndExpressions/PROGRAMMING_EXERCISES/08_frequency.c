/* For a certain electrical circuit with an inductance L and resistance R, the damped natural frequency is given by
                Frequency = √((1/LC) - (R²/4L²))
   It is desired to study the variation of this frequency with C (capacitance). WAP to calculate the frequency for different values of C starting from 0.01 to 0.1 in steps of 0.01.
*/

#include<stdio.h>
#include<math.h>

int main() {
    float L, R, C;
    double frequency;

    L = 2.5; // inductance in Henrys
    R = 10.0; // resistance in Ohms

    printf("C (F)\tFrequency (Hz)\n");
    printf("-------------------------\n");

    for (C = 0.01; C <= 0.1; C += 0.01) {
        frequency = sqrt((1.0 / (L * C)) - ((R * R) / (4 * L * L)));
        printf("%.2f\t%.2lf\n", C, frequency / (2.0 * 3.141592653589793));
    }

    return 0;
}