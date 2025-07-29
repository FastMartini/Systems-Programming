#include <stdio.h>
/* prints Celsius-Fahrenheit Table */

int main() 
{
    printf("----Celsius to Fahrenheit Table----\n");
    printf("\n");

    float fahrenheit, celsius;
    int lower, upper, step;

    upper = 300; /* maximum value */
    lower = 0; /* minimum value */
    step = 20; /* Step Size (Used to determine # applied to an increment)*/

    celsius = lower;

    while (celsius <= upper) { /* While the value of Celsius is less than the maximum value (300) */
        fahrenheit = ((9.0/5.0) * celsius) + 32; /* Celsius to Fahrenheit Conversion Formula */
        printf("%.1f\t%.1f\n", celsius, fahrenheit); /* prints Celsius value followed by Fahrenheit equivalent, each with 1 decimal place and separated by a tab */
        celsius = celsius + step; /* increases the value of Celsius by 20 and loops back */
    } 
    return 0;
}