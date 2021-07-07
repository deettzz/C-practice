// NOTE: to run a specific section, comment out other sections 

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

// Exercise 1-9 Replacing each string of one or more blanks by a single blank
    int c, state, spaces;
    spaces = 0;
    state = 0;

    while((c = getchar()) != EOF)
        if (c ==' ' && state == 0){
            state = 1;
            ++spaces;
        }
        else if (c == ' ' && state == 1){
            spaces++;
        }
        else if(c != ' ' && state ==1){
            state = 0;
            printf(" ");
            putchar(c);
            spaces = 0;
        }
        else if(c != ' ' && state == 0){
            putchar(c);
        }

// Exercise 1.10 Replae each tab with \t, each backspace with \b, and each 
// backslash with \\ -> making tabs and backspaces more visible
    int c;
    while((c = getchar()) != EOF)
        if (c == '\t'){
            printf("\\");
            printf("t");
        }
        else if (c == '\b'){
            printf("\\");
            printf("b");
        }
        else if (c == '\\'){
            printf("\\\\");
        }
        else{
            putchar(c);
        }
}