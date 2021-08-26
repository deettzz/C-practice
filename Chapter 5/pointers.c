// Page 97 - Pointers and Arrays
// Section 5.3

#include <ctype.h>
int getch(void);
void ungetch();

/* getint: get next integer from input into *pn */
int getint(int *pn){
    int c, sign;
    while(isspace(c = getch()));    /* skip white space */
    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if(c == '+' || c == '-')
        c = getch();
    for(*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}

//page 99 - Pointers and Arrays
/*strlen: return length of string s */
int strlen(char *s){
    int n;
    for(n = 0; *s != '\0'; s++)
        n++;
    return n;
}