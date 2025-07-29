#include <stdio.h>

#define IN 1 // Inside a word
#define OUT 0 // Outside a word

/* Prints input one word per line (2nd version).
   
   loose definition: word is any sequence of characters that
   does not contain a blank, tab or newline. */

int main() 
{

    int c, nw, state;
    state = OUT;

    nw = 0;


    while ((c = getchar()) != EOF) {

        if (c == '\n' || c == '\t' || c == ' '){
            state = OUT;
        } else if (state == OUT){
            state = IN; 
            while (state == IN) {
                putchar(c);
            }
        }  
    }

    return 0;
}