#include <stdio.h>

#define IN 1 // Inside a word
#define OUT 0 // Outside a word

/* Prints input one word per line (2nd version).
   
   loose definition: word is any sequence of characters that
   does not contain a blank, tab or newline. */

int main() 
{

    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n'){ // if current character equals space, tab, or newline, then,
            if (state == IN){ // if inside word
                putchar('\n'); // print a new line (separates words)
                state = OUT; // switch state to currently outside of word
            }
        } else {
            putchar(c); // print current character
            state = IN; // switch state to inside of word
        }
    }
    return 0;
}