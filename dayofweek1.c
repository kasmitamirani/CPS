#include <stdio.h>
#include <stdlib.h>

int main()
{

int day;
int month;
int countdays;
int x;
int dayofweek;
int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

printf("This program will tell you what day of the week it was on a given date in 2017.\n");
printf("Enter the date in the form of dd-mm.\n");
scanf("%d-%d", &day, &month);

/*Validate*/
if (month<1 || month > 12 || day>31){
    printf("Please enter a valid date, you absolute potato.\n");
    return 0;
}

if(month ==2){
    countdays=28;
} else if(month==4 || month==6 || month==9 || month==11) {
    countdays=30;
} else if (month==1 || month ==3 || month ==5 || month==7 || month ==8 || month==10 || month==12) {
    countdays=31;
}

if(month == 1) {
		x = 0;
	} else if(month == 2) {
		x = 31;
	} else if(month == 3) {
		x = 59;
	} else if(month == 4) {
		x = 90;
	} else if(month == 5) {
		x = 120;
	} else if(month == 6) {
		x = 151;
	} else if(month == 7) {
		x = 181;
	} else if(month == 8) {
		x = 212;
	} else if(month == 9) {
		x = 243;
	} else if(month == 10) {
		x = 273;
	} else if(month == 11) {
		x = 304;
	} else if(month == 12) {
		x = 334;
	}


dayofweek = ((day+x)+ 6) % 7;
	if (dayofweek == 0) {
		printf("It was a Sunday!");
	}
	if(dayofweek == 1) {
		printf("It was a Monday!");
	}
	if(dayofweek == 2) {
		printf("It was a Tuesday!");
	}
	if(dayofweek == 3) {
		printf("It was a Wednesday!");
	}
	if(dayofweek == 4) {
		printf("It was a Thursday!");
	}
	if(dayofweek == 5) {
		printf("It was a Friday!");
	}
	if(dayofweek == 6) {
		printf("It was a Saturday!");
	}
    return EXIT_SUCCESS;
}




