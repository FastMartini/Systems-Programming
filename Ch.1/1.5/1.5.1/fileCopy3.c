#include <stdio.h>
/* copy input to output ; verifies getchar() != EOF is 0 or 1; prints EOF value; 3rd version */

int main() 
{

int c;

for(c = getchar(); c != EOF; c = getchar()) {
    printf("\t\nResult of (getchar() != EOF): %d\n", c != EOF);
    putchar(c);
}

 printf("\t\nResult of (getchar() != EOF): %d\n", c != EOF);

 printf("\t\nResult of EOF: %d\n", EOF);
 return 0;
}