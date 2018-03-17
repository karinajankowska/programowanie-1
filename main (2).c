#include <stdio.h>
#define celsjusz\
int const farenheit = 451;
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
