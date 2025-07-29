#include <stdio.h>
/* copy input to output ; also verify getchar() != EOF is 0 or 1; 2nd version */

int main()
{

int c; /* data type int is used in order to store and return all possible char values (0-255) and EOF (-1) */


while ((c = getchar()) != EOF) { /* While c = getchar() does NOT equal End Of File */
    printf("\t\nResult of (getchar() != EOF): %d\n", c != EOF); // EOF should equal 1
    putchar(c); /* outputs the input */
}

// when c == EOP
printf("\nResult of (getchar() != EOF): %d\n", c != EOF); // EOF should equal 0

return 0;
}