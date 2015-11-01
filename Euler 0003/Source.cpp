#include <iostream>
#include <math.h>
#include <ctime>

int main() {

	/*
	PROBLEM NUMBER : 3

	PROBLEM TITLE : " Sum square difference "

	PROBLEM STATEMENT : " The prime factors of 13195
	are 5, 7, 13 and 29.

	What is the largest prime
	factor of the number
	600851475143 ? "

	SOLUTION : " 6857 "

	*/


	//Hard-coded in the number in question.
	long long n = 600851475143;


	clock_t begin = clock();

	// Uses trial division to progressively divide
	// the number by all numbers from 2 to the sqrt
	// of the number. Note that n is changed whenever
	// a successful division occurs.
	int bound = ceil(sqrt(n));
	for (long long i = 2; i < bound; i++) {

		while (fmod(n, i) == 0) {

			n = n / i;
			bound = ceil(sqrt(n));

		}

	}
	clock_t end = clock();

	double secs = end - begin / CLOCKS_PER_SEC;
	std::cout << secs << std::endl;

	std::cout << n;

	return 0;

}

/* Notes:

- N/A

*/