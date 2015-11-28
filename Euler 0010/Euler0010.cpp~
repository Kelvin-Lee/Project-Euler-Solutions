#include <iostream>
#include <vector>
#include <math.h>

int main() {

	/* PROBLEM NUMBER: 10
	
	   PROBLEM TITLE: "Summation of primes"

	   PROBLEM STATEMENT: " The sum of the primes 
	   below 10 is 2 + 3 + 5 + 7 = 17. Find the sum
	   of all the primes below two million."

	   SOLUTION:  	142913828922

	 */

	std::cout << "BOUND" << std::endl;
	unsigned long bound = 0;
	std::cin >> bound;

	unsigned long long sum = 5;

	for (unsigned long  i = 5; i < bound; i += 2)
	{
		bool isPrime = true;

		// To check for primality, we only need to check up to
		// the square root of the number to find out if it
		// is composite or not.
		for (unsigned long j = 3; j <= ceil(sqrt(i)); j += 2)
		{
			if (i%j == 0)
			{
				isPrime = false;
				break;
			}
		}

		// If it is prime, then we add it to the sum.
		if (isPrime)
		{
			sum += i;
		}
	}

	std::cout << sum;
	return 0;

}

/* NOTES:

   - Brute force approach

   */
