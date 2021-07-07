// page 20 Word Counting
// Section 1.5.4
#include <stdio.h>

#define IN 1
#define OUT 0
/* count lines, words, and characters in input*/
main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF){
        ++nc;
        if (c =='\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
            state = IN;
            ++ nw;
    }
    printf("%d %d %d\n", nl, nw, nc);

// Exercise 1-11 How would you test the word count program?
//      First add words separated by spaces, then add words separated by a new lines, and 
//      then add words separated by tabs.
//      Then test with one long word and see if only inputs 1

// Exercise 1-12 Write a program that prints its input one word per line
    int c, state;
    state = OUT;

    while((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            printf("\n");
        }
        else if (state == OUT)
            putchar(c);
    }
}