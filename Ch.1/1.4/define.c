#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

int main() 
{
    printf("----Fahrenheit to Celsius Table----\n");
    printf("\n");

    float fahrenheit, celsius;

    for(fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit += STEP) { /* Start with fahrenheit at 0; as long as fahrenheit is less than or equal to 300, increase it by 20 each time */
        printf("%.1f\t%.1f\n", fahrenheit, (5 * (fahrenheit - 32) / 9)); /* Prints the fahrenheit value and its Celsius equivalent, each with 1 decimal place and separated by a tab */
    } 
    return 0;
}