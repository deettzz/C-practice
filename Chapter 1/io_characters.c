// page 16 - Input/Output of Characters
// section 1.5
#include <stdio.h>
int main()
{
    int c;
    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    printf("program is done");


// page 17 - Input/Output of Characters
    int d;
    while ((d = getchar()) != EOF){
        putchar(d);
    }


// page 18 - Count characters in input
    long nc;

    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("%ld\n", nc);

    
// page 18 - Count characters in input - 2nd version
    double mc;

    for(mc = 0; getchar() != EOF; ++mc)
    ; // a null statement
    printf("%.0f\n",mc);

    return 0;
}