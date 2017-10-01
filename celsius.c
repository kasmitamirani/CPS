#include <stdio.h>
#include <stdlib.h>

int main()
{

double fahrenheit;
double celsius;

printf("Input the temperature in degrees celsius:\n");
scanf("%lf", &celsius);

fahrenheit = (9.0/5.0) * celsius + 32.0;
printf("The converted temperature of %.2lf into fahrenheit is %.2lf.\n", celsius, fahrenheit);

return EXIT_SUCCESS;
}



