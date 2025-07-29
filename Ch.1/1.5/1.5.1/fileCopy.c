#include <stdio.h>
/* copy input to output; 1st version */

int main()
{

int c; /* data type int is used in order to store and return all possible char values (0-255) and EOF (-1) */
c = getchar(); /* Enables you to input a text stream of characters in the terminal */

while (c != EOF) {
    putchar(c); /* outputs the input */
    c = getchar(); /* allows you to recursively input */
}

if (c == EOF) {
    printf("You have reached EOF.");

}

return 0;   
}