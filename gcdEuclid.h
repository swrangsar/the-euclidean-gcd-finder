#ifndef _gcdEuclid_h
#define _gcdEuclid_h

/* This program finds the gcd of any two integers using Euclid's algorithm.
 * This implementation by Swrangsar Basumatary.
 * email: swrangsar@aol.com
 */

#define NUMSIZE 10
#define MAX(a, b) ((a) > (b) ? (a) : (b))
	 
int euclideanGCD(int a, int b);
void printGCD(int a, int b);
void getInputForGCD(void);

#endif