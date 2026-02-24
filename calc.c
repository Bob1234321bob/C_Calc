#include <stdio.h>

float Addition (float numberOne, float numberTwo) {

	float sum = numberOne + numberTwo;
	return sum;
}

float Subtraction (float numberOne, float numberTwo) {

	float difference = numberOne - numberTwo;
	return difference;
}

float Multiplikation (float numberOne, float numberTwo) {

	float product = numberOne * numberTwo;
	return product;
}

float Division (float numberOne, float numberTwo) {

	float quotient = numberOne / numberTwo;
	return quotient;
}
 

int main () {

	float numberOne;
	float numberTwo;
	int chooseOperator;

	printf("What Operator do you want to use?\n1 Addition\n2 Subtraction\n3 Multiplikation\n4 Division\n");
	scanf("%d", &chooseOperator);
	
	printf("What is your first number:\n");
	scanf("%f", &numberOne);

	printf("What is your second number:\n");
	scanf("%f", &numberTwo);


	

	switch (chooseOperator) {
		case 1:
			printf("The sum is: %f", Addition(numberOne, numberTwo));
			break;
		case 2:
			printf("The difference is: %f", Subtraction(numberOne, numberTwo));
			break;
		case 3:
		       	printf("The product is: %f", Multiplikation(numberOne, numberTwo));
			break;
		case 4:
			printf("The quotient is; %f", Division(numberOne, numberTwo));
			break;
		default:
			printf("Tung Tung Tung Sahur");
		}
	
	return 0;
}
