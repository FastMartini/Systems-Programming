#include <stdio.h>

/* count digits, white space, others */

int main()
{

    int c, i, nwhite, nother;

    int ndigit[10];

    nwhite = nother = 0;

    for (i = 0; i < 10; ++i) { //index starts at 0 and increments index by 1 until it reaches 9
        ndigit[i] = 0; //initializes each digit at 0
    }

    while ((c = getchar()) != EOF) { 
        if (c >= '0' && c <= '9'){  //If character is a digit greater than or equal to 0 and less than or equal to 9
            ++ndigit[c - '0']; //increments the corresponding digit count (e.g. Let c = '3'; therefore, [ '3' - '0'] = [51 - 48] = 3)
        } else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits =");
    
    //print digit counts
    for (i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);
    }

    printf(", white space = %d, other = %d\n", nwhite, nother);
}