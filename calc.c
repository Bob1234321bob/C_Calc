#include <stdio.h>

int Addition (float numberOne, float numberTwo) {

	float sum = numberOne + numberTwo;
	printf("%f", sum);
	
	return 0;
}

int Subtraction (float numberOne, float numberTwo) {

	float difference = numberOne - numberTwo;
	printf("%f", difference);

	return 0;

}

int Multiplikation (float numberOne, float numberTwo) {

	float product = numberOne * numberTwo;
	printf("%f", product);

	return 0;

}

int Division (float numberOne, float numberTwo) {

	float quotient = numberOne / numberTwo;
	printf("%f", quotient);
	
	return 0;

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
			Addition(numberOne, numberTwo);
			break;
		case 2:
			Subtraction(numberOne, numberTwo);
			break;
		case 3:
		       	Multiplikation(numberOne, numberTwo);
			break;
		case 4:
			Division(numberOne, numberTwo);
			break;
		default:
			printf("Tung Tung Tung Sahur");
		}
	
	return 0;
}
