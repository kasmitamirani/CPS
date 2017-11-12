#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main() {
double random;
srand48(time(NULL));
random = drand48();

if (random >=0 && random < .2){
  printf("Milk\n");
}
else if (random >= .2 && random < .4){
  printf("Caramel\n");
}
else if(random >= .4 && random <.6){
  printf("Sweet\n");
}
else if(random >= .6 && random < .8){
  printf("Semisweet\n");
}
else if(random >= .8 && random <1){
  printf("Dark\n");
}
/* Prints a random value satisfying 0 <= value < 1 */
return EXIT_SUCCESS;
}