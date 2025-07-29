#include <stdio.h>
#include <termios.h>
#include <unistd.h>

/* a program to copy its input to its output, replacing each
tab by \t, each backspace by \b, and each backslash by \\. */

int main() 
{

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("%c%c", '\\', 't');
        } else if (c == 127) {
            printf("%c%c", '\\', 'b');
        } else if (c == '\\') {
            printf("%c%c", '\\', '\\');
        } else {
            printf("%c", c);
        }
    }

    return 0;
}





/* Since stdin processes backspaces before they're read on input,
   the following code is written in a way that would read \commands as a stream
   and output the characters as you type them:*/

/*int main () {
    struct termios old_tio, new_tio;
    int c;

    tcgetattr(STDIN_FILENO, &old_tio);

    new_tio = old_tio;
    new_tio.c_lflag &= (~ICANON & ~ECHO);

    tcsetattr(STDIN_FILENO, TCSANOW, &new_tio);

    printf("Press a key (CTRL+C to exit):\n");

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("%s", "\\t");
        } else if (c == 127) {
            printf("%s", "\\b");
        } else if (c == '\\') {
            printf("%s", "\\\\");
        } else {
            printf("%c", c);
        }
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &old_tio);

    return 0;
}
*/