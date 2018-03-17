/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int const kelvin = 12;
int const farenheit = 451;
#define TRUE
#define FALSE
int main()
{
float celsjusz, fahrenheit, kelvin, rankine;
printf ("Temperatura w stopniach Fahrenheita: ");
scanf ("%f", &fahrenheit);
celsjusz = (fahrenheit - 32) * 5 / 9;
printf ("%.2f Fahrenheit = %.2f Celsjusza", fahrenheit, celsjusz);
printf ("Temperatura w stopniach Kelvina: ");
scanf ("%f", &kelvin);
kelvin = celsjusz + 273;
printf ("%.2f Celsjusza = %.2f Kelvina", celsjusz, kelvin);
printf ("Temperatura w stopniach Rankine'a:" );
scanf ("%f", &rankine);
rankine = kelvin * 9.0/5.0;
printf ("%.2f Kelvina to %.2f Rankine", kelvin, rankine);

    return 0;
}
