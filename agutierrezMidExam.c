//Alexis Gutierrez
//csc321


#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int userNum = 0;
	int myNum = 10;

	printf("Guess the number I'm thinking of: \n");
	scanf("%d", &userNum);

	if (userNum == myNum) {
		printf("You Won!! Your Prize is $100!\n");
	}else if (userNum != myNum) {
		printf("You Lost!! Take the L! Goodbye.\n");
	}else {
		printf("Error! Invalid Input");
	}

	return EXIT_SUCCESS;
}
