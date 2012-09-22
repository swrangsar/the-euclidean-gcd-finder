#include <stdio.h>
#include <stdlib.h>
#include "gcdEuclid.h"
	 
int euclideanGCD(int a, int b)
{
	int dividend;
	int divisor;
	int remainder;
	 
	if (a == MAX(a, b)) {
		dividend = a;
		divisor = b;
	} else {
		dividend = b;
		divisor = a;		
	}
	
	if (!divisor) {
		printf("\nDivision by zero is undefined!\n");
		exit(1);
	}
	
	remainder = dividend % divisor;
	if (!remainder) {
		return divisor;
	} else {
		return euclideanGCD(divisor, remainder);
	}
}

void printGCD(int a, int b)
{
	printf("-----------------------------------------------------");
	printf("\nThe gcd of %d and %d is: %d\n", a, b, euclideanGCD(a, b));
}

void getInputForGCD(void)
{
	char* num1 = NULL;
	char* num2 = NULL;
	int a;
	int b;
	num1 = malloc(sizeof(char) * (NUMSIZE + 2));
	num2 = malloc(sizeof(char) * (NUMSIZE + 2));

	printf("Note: This program prints the Euclidean GCD of two numbers.\n\n");
	
	printf("Enter the first integer value: ");
	fgets(num1, NUMSIZE, stdin);
	printf("Enter the other integer value: ");
	fgets(num2, NUMSIZE, stdin);

	a = atoi(num1);
	b = atoi(num2);	
	printGCD(a, b);
	
	if (num1) {
		free(num1);
		num1 = NULL;
	}
	if (num2) {
		free(num2);
		num2 = NULL;
	}	
}