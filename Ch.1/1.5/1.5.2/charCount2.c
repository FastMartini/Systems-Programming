#include <stdio.h>
/* count characters in input; 2nd version */

int main()
{

double nc; // double data type can withstand even bigger numbers

for(nc = 0; getchar() != EOF; ++nc){
    ; // for statement requires a body, so the semicolon is used to satisfy that requirement all while having a null body
}

// %.0f will print a double precision float (no decimal places)
printf("\nTotal Count: %.0f\n", nc); 

return 0;
}