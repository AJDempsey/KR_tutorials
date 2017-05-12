#include <stdio.h>

/* Count lines in input */
main()
{
    int c, nl, tabs, spaces;

    tabs = spaces = nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++spaces;
        if (c == '\t')
            ++tabs;
    }
    printf("New lines: %d\n", nl);
    printf("Tabs: %d\n", tabs);
    printf("Spaces: %d\n", spaces);
    
}
