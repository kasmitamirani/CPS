#include <stdio.h>
#include <stdlib.h>

int main()
{

double farenheit;
double celsius;

printf("Input the temperature in degrees farenheit:\n");
scanf("%lf", &farenheit);

celsius = (5.0/9.0) * (farenheit-32.0);
printf("The converted temperature of %.2lf into celsius is %.2lf.\n", farenheit, celsius);

return EXIT_SUCCESS;
}



