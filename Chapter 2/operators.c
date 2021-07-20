// Page 42 - Relational and Logical Operators
// Section 2.6
#include <stdio.h>
main()
{
    // Exercise 2-2 - Write the loop equivalent to the for loop without using && and ||
    int lim = 1000;
    int c;
    char s[1000];
    for (int i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
    {
        s[i] = c;
    }

    int i = 0;
    while (i < lim - 1)
    {
        while ((c = getchar()) != '\n')
        {
            while (c != EOF)
            {
                s[i] = c;
                c = EOF; // have to make sure the while loop only loops once
            }
            c = '\n'; // have to make sure the while loop only loops once
        }
        i++;
    }
}
