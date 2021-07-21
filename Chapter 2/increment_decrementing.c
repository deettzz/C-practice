// Page 48 - Increment and Decrement Operators
// Section 2.8
#include <stdio.h>
#include <string.h>

// Exercise 2.4 - Delete each character in s1 that matches any character in s2
void squeeze(const char s1[], const char s2[]);
main()
{
    char name[] = "aditi";
    char name_2[] = "adityalfkjslkfya";
    squeeze(name_2, name);
    return 0;
}
void squeeze(const char s1[], const char s2[])
{
    char new_s1[100] = "";
    char holder_s1[2] = "";
    for(int i = 0; i < strlen(s1); i++){
        if(strchr(s2, s1[i]) == NULL){
            holder_s1[0] = s1[i];
            strcat(new_s1, holder_s1);
        }
    }
    printf(new_s1);
}