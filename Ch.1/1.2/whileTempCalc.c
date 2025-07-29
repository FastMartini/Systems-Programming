#include <stdio.h>
/* prints fahrenheit-Celsius Table */

int main() 
{
    printf("----Fahrenheit to Celsius Table----\n");
    printf("\n");

    float fahrenheit, celsius;
    int lower, upper, step;

    upper = 300; /* upper limit */
    lower = 0; /* lower limit */
    step = 20; /* Step Size (Used to determine # applied to an increment)*/

    fahrenheit = lower;

    while (fahrenheit <= upper) { /* While the value of Fahrenheit is less than the maximum value (300) */
        celsius = 5 * (fahrenheit - 32) / 9; /* Fahrenheit to Celsius Conversion Formula */
        printf("%.1f\t%.1f\n", fahrenheit, celsius); /* prints Fahrenheit value followed by Celsius equivalent, each with 1 decimal place and separated by a tab */
        fahrenheit = fahrenheit + step; /* increases the value of Fahrenheit by 20 and loops back */
    } 
    return 0;
}