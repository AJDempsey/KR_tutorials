#include <stdio.h>

/* Count lines in input */
main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ');
            putchar(' ');
        }
        putchar(c);
    }
    
}
