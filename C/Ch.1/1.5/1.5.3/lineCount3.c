#include <stdio.h>
/* a program to copy its input to its output, replacing each
string of one or more blanks by a single blank. */

int main()
{
    int c, prev = 0;

    for (c = getchar(); c != EOF; c = getchar()) {
        if (c != ' '){
            putchar(c); // If current character DOES NOT EQUAL blank, print current character
        } else if (prev != ' ') {
            putchar(c); // If current character DOES EQUAL blank and previous character DOES NOT EQUAL blank, print current character
        }
        prev = c;
    }
    
    return 0;
}