#include <stdio.h>
#include <stdlib.h>

int main()
{

int day;
int month;
int dayofweek=0;
int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

printf("This program will tell you what day of the week it was on a given date in 2017.\n");
printf("Enter the date in the form of dd-mm.\n");
scanf("%d-%d", &day, &month);

/*Validate*/
if (month<1 || month > 12 || day>31 || day<1){
    printf("Please enter a valid date, you absolute potato.\n");
    return 0;
}

/*Create a for loop that will make it add up the previous days.*/
/*For loops contain a variable that changes state every time*/
/*The condition is to continue adding month's value until x is no longer less than month - 1.*/
/*At the end we add 1 to int so the loop continues til the condition isn't met anymore*/
for(int x = 0 ; x < month -1; x++){
    dayofweek = dayofweek + Month[x] ;
}

/*Ask the program to take the previous value of dayofweek and transform it.*/
dayofweek = ((day+dayofweek)+ 6) % 7;
	if (dayofweek == 0) {
		printf("%.2d/%.2d was a Sunday.", day, month);
	}
	if(dayofweek == 1) {
		printf("%.2d/%.2d was a Monday.", day, month);
	}
	if(dayofweek == 2) {
		printf("%.2d/%.2d was a Tuesday.", day, month);
	}
	if(dayofweek == 3) {
		printf("%.2d/%.2d was a Wednesday.", day, month);
	}
	if(dayofweek == 4) {
		printf("%.2d/%.2d was a Thursday.", day, month);
	}
	if(dayofweek == 5) {
		printf("%.2d/%.2d was a Friday.", day, month);
	}
	if(dayofweek == 6) {
		printf("%.2d/%.2d was a Saturday.", day, month);
	}
    return EXIT_SUCCESS;
}