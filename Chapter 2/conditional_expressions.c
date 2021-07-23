// Page 52 - Conditional Expressions
// Section 2.11

#include <stdio.h>
int lower(int c);
int lower_new(int c);
main()
{
    int c = getchar();
    printf("Function Lower: %d\n", lower(c));
    printf("Modified Function Lower: %d\n", lower_new(c));
    return 0;
}
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

//Exercise 2.10 - Revise lower so it uses a ternary operator instead of if-else statement
int lower_new(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}