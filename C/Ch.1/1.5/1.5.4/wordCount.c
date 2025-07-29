#include <stdio.h>

#define IN 1 // Inside a word
#define OUT 0 // Outside a word

/* count lines, words, and characters in input.
   
   loose definition: word is any sequence of characters that
   does not contain a blank, tab or newline. */
int main() 
{

    int c, nl, nw, nc, state;

    state = OUT;

    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n') ++nl;

        if (c == '\n' || c == '\t' || c == ' '){
            state = OUT;
        } else if (state == OUT){
            state = IN;
            ++nw;
        }      
    }

    printf("Total # of lines: %d\n", nl);
    printf("Total # of words: %d\n", nw);
    printf("Total # of characters: %d\n", (nc - 1));

    return 0;
}