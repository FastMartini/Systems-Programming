#include <stdio.h>
/* count characters in input; 1st version */

int main()
{

long nc; // long data type holds 32 bits as opposed to the int data type (16)
nc = 0;

while (getchar() != EOF) {
    ++nc;
    printf("%ld\n", nc);
}
printf("\nTotal Count: %ld\n", nc);

return 0;
}