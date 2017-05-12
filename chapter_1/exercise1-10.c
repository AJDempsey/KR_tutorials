#include <stdio.h>

/* Count lines in input */
main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        // Haven't actually covered this in the book
        // but the terminal behaviour is different than K&R's
        if (c != '\\' && c != '\b' && c != '\t')
            putchar(c);
    }
    
}
