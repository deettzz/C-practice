#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char s[]);

main()
{
    char s[] = "0x345";
    int answer = htoi(s);
    printf("%d", answer);
}
int htoi(char s[])
{
    int final_int = 0;
    int power = 0;
    for (int i = strlen(s) - 1; i >= 2; --i)
    {
        if (s[i] == 'a' || s[i] == 'A')
        {
            final_int += (pow(16, power) * 10);
        }
        else if (s[i] == 'b' || s[i] == 'B')
        {
            final_int += (pow(16, power) * 11);
        }
        else if (s[i] == 'c' || s[i] == 'C')
        {
            final_int += (pow(16, power) * 12);
        }
        else if (s[i] == 'd' || s[i] == 'D')
        {
            final_int += (pow(16, power) * 13);
        }
        else if (s[i] == 'e' || s[i] == 'B')
        {
            final_int += (pow(16, power) * 14);
        }
        else if (s[i] == 'f' || s[i] == 'B')
        {
            final_int += (pow(16, power) * 15);
        }
        else
        {
            final_int += (pow(16, power) * ((int)(s[i]) - '0'));
        }
        power++;
    }
    return final_int;
}