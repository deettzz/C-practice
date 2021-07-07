// page 19 - Counting lines
// Section 1.5.3
#include <stdio.h>
main(){
    int c, nl;
    nl = 0;
    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);


// Exercise 1-8 Count blanks, tabs, and newlines
    int n, chars;
    chars = 0;

    while((n = getchar()) != EOF)
        if ((n == '\n') || (n == '\t') || (n == ' '))
            ++chars;
    printf("%d\n", chars);

// page 20 - Counting words

}

