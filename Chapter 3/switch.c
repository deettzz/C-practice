// Page 60 - Switch Cases
// Section 3.4

#include <stdio.h>
#include <string.h>

// Exercise 3.4 - Write a function escape(s,t) that converts characters like newline and tab
// into visible escape sequences as it copies the string t to s.
void escape_new(char s[], char t[]);
main()
{
    char longest[1000] = "else";
    escape_new("something   new,\n", longest);
    return 0;
}

void escape_new(char s[], char t[])
{
    char new_string[2];
    char another_string[1];
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        int c = s[i];
        switch (c)
        {
            case '\t':
                new_string[0] = '\\';
                new_string[1] = 't';
                strcat(t, new_string);
                break;
            case '\n':
                new_string[0] = '\\';
                new_string[1] = 'n';
                strcat(t, new_string);
                break;
            default:
                another_string[0] = s[i];
                strcat(t, another_string);
                break;
        }
    }
    printf(t);
}