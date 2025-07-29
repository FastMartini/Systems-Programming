#include <stdio.h>
/* Program counts input lines, blanks, and tabs. */

int main() 
{

long nl = 0, nt = 0, nb = 0, c;

while ((c = getchar()) != EOF) {
    if (c == '\n') ++nl;   
    else if (c == ' ') ++nb;    
    else if (c == '\t') ++nt;      
}

printf("Total # of lines after EOF: %ld\n", nl);
printf("Total # of blanks after EOF: %ld\n", nb);
printf("Total # of tabs after EOF: %ld\n", nt);

return 0;
}