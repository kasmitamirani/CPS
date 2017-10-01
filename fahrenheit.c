#include <stdio.h>
#include <stdlib.h>

int main()
{

double fahrenheit;
double celsius;

printf("Input the temperature in degrees fahrenheit:\n");
scanf("%lf", &fahrenheit);

celsius = (5.0/9.0) * (fahrenheit-32.0);
printf("The converted temperature of %.2lf into celsius is %.2lf.\n", fahrenheit, celsius);

return EXIT_SUCCESS;
}



