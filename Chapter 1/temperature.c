// page 9 - Fahrenheit temperatures
// Section 1.2
#include <stdio.h>
// print Fahrenheit-Celsius table for fahr = 0, 20,....300
main(){
    // declaration annouces the properties of variables, consists of a type name
    // a list of variable names
    int fahr, celsius;
    int lower, upper, step;

    // assignment statements = set variables to their original values
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Temperature conversion from Fahrenheit to Celsius\n");
    while(fahr <= upper){
        // integer division truncates, any fractional part is discarded
        celsius = 5*(fahr-32)/9;
        // printf("%d\t%d\n",fahr,celsius);
        printf("%3d %6d\n",fahr,celsius);
        fahr = fahr + step;
    }

// printf is not part of C; is just a useful function from the standard of library of functions
// that are normall accessbile to C programs
// scanf is like printf, it reads input instead of writing output


// page 12 - Fahrenheit temperatures - more accurate
// print Fahrenheit-Celsius table for fahr = 0, 20,....300
    float fahr_f, celsius_f; 

    lower = 0;
    upper = 300;
    step = 20;
    fahr_f = lower;

    //exercise 1.3 - print heading above the table
    printf("Temperature conversion from Fahrenheit to Celsius\n");
    while(fahr_f <= upper){
        celsius_f = (5.0/9.0) * (fahr_f-32.0);
        printf("%3.0f %6.1f\n",fahr_f,celsius_f);
        fahr_f = fahr_f + step;
    }

    //exercise 1.4 - Celsius - Fahrenheit table
    lower = 0;
    upper = 300;
    step = 20;
    celsius_f = lower;

    printf("Temperature conversion from Celsius to Fahrenheit\n");
    while(celsius_f <= upper){
        fahr_f = (9.0/5.0)*celsius_f + 32.0;
        printf("%3.0f %6.1f\n",celsius_f,fahr_f);
        celsius_f = celsius_f + step;
    }


    // Section 1.3 - Another variation with a for loop
    printf("Temperature conversion from Fahrenheit to Celsius\n");
    int fahr_i;
    for(fahr_i = 0; fahr_i <= 300; fahr_i = fahr_i + 20){
        printf("%3d %6.1f\n", fahr_i, (5.0/9.0)*(fahr_i-32));
    }

    // Exercise 1.5 - Modify for loop to run backwards
    printf("Temperature conversion from Fahrenheit to Celsius\n");
    int fahr_t;
    for(fahr_t = 300; fahr_t >= 0; fahr_t = fahr_t - 20){
        printf("%3d %6.1f\n", fahr_t, (5.0/9.0)*(fahr_t-32));
    }

    // #define name replacement text
    // defines symbolic name or symbolic constant to be a particular string of characters
    // no semicolon at the end of line
    
    #define LOWER 0
    #define UPPER 300
    #define STEP 20
    printf("Temperature conversion from Fahrenheit to Celsius\n");
    for(fahr_t = UPPER; fahr_t >= LOWER; fahr_t = fahr_t - STEP){
        printf("%3d %6.1f\n", fahr_t, (5.0/9.0)*(fahr_t-32));
    }
}