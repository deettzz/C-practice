// Page 24 - Functions
// Section 1.7

#include <stdio.h>

int power(int m, int n);
float temperature_fahrtocelsius_conversion(float fahr);
float temperature_celsiustofahr_conversion(float celsius);
int power_v2(int base, int n);


main()
{
    int i;
    for(i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    
    //Exercise 1.15
    printf("%.2f\n", temperature_fahrtocelsius_conversion(89.0));
    printf("%.2f\n", temperature_celsiustofahr_conversion(31.67));

    for(i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power_v2(2,i), power_v2(-3,i));
    return 0;
}

// power: raise base to n-th power; n>=0
int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; i++)
        p = p * base;
    return p;
}

// Exercise 1-15 Rewrite the temperature conversion program of Section 1.2 to
// use a function for conversion
float temperature_fahrtocelsius_conversion(float fahr)
{
    float celsius = 5 * (fahr - 32) / 9;
    return celsius;
}
float temperature_celsiustofahr_conversion(float celsius)
{
    float fahr = celsius*(9.0/5.0)+32;
    return fahr;
}

// Page 27 - Arguments Call By Value
// Section 1.8
// power: raise base to n-th power; n>=0; version 2
int power_v2(int base, int n)
{
    int p;
    for(p = 1; n > 0; --n)
        p = p * base;
    return p;
}