#include <stdio.h>
/* Program counts input lines. The standard library ensures that an input 
text stream appears as a sequence of lines, each terminated by a newline. 
Hence, counting lines is just counting newlines: */

int main() 
{

long nl = 0, c;

while ((c = getchar()) != EOF){
    if (c == '\n') ++nl;
}

printf("Total # of lines after EOF: %ld\n", nl);

return 0;
}