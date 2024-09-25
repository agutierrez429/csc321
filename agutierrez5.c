//Alexis Gutierrez
//csc321


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int x = 125, i = 0;
	int ar[10] = {1,2,3,4,5,6,7,8,9,10};
	float y = 3.1468;
	double z = 9.9;
	char c = 'a';
	
	//INTEGER
	printf("Integer: Address of x is %p and the value is %d \n", &x, x);
	//FLOAT
	printf("Float: Address of y is %p and the value is %f \n", &y, y);
	//DOUBLE
	printf("Double: Address of z is %p and the value is %lf \n", &z, z);
	//CHAR
	printf("Char: Address of c is %p and the value is %c \n", &c, c);
	
	if(1) {
		int y = 0;
	}
	/*
	OUT OF SCOPE
	printf("y is %d \n",y);
	*/

	//printf("ar[0] = %d \n", ar[0]);

	for(i = 0; i < 10; i++) {
		printf("ar[%d] = %d and address is %p \n",i,ar[i],&ar[i]);
	}	
	
	return EXIT_SUCCESS;
}
