//Alexis Gutierrez
//csc-321

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x = 0;
	double d = 0.0;
	char inputChar;
	char compareChar = 'a';
	float z = 0.0;
	//INTEGER
	printf("Enter an integer: ");
	scanf("%d", &x);

	if(x > 5) {
		printf("You input a number larger than 5 \n");
	}
	else if(x == 5) {
		printf("You input 5 \n");
	}
	else {
		printf("You input a number less than 5 \n");
	}
	//DOUBLE
	printf("Enter a double: ");
	scanf("%lf", &d);

	if(d < 10.0) {
		printf("You input a number less than 10 \n");
	}
	else if(d == 10.0) {
		printf("You input a number that equals 10 \n");
	}
	else {
		printf("You input a number that is greater than 10 \n");
	}
	//CHAR
	printf("Enter a character: ");
	scanf(" %c", &inputChar);

	if(inputChar == compareChar) {
		printf("Your input matches \n");
	}
	else if (inputChar != compareChar) {
		printf("Your input does not match \n");
	}
	else {
		printf("You input something other than a character");
	}
	//FLOAT
	printf("Enter a float: ");
	scanf("%f", &z);

	if(z > 3.5) {
		printf("You input a number greater than 3.5 \n");
	}
	else if(z == 3.5) {
		printf("You input a number that equals 3.5 \n");
	}
	else {
		printf("Your input is less than 3.5 \n");
	}

	return EXIT_SUCCESS;
}
