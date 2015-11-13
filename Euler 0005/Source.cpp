#include <iostream>

int main() {

	/* PROBLEM NUMBER: 5
	   
	   PROBLEM TITLE: "Smallest multiple"

	   PROBLEM STATEMENT: " 2520 is the smallest number that can 
	   be divided by each of the numbers from 1 to 10 without any remainder.
	   What is the smallest positive number that is evenly divisible 
	   by all of the numbers from 1 to 20?

	   PROBLEM ANSWER:  	232792560

	   */


	std::cout << "Upper bound (inclusive)?";
	unsigned int temp;
	std::cin >> temp;
	const int upper_bound = temp;

	unsigned long long product = 1;

	// Since we can already eliminate at least
	// the even numbers, we can expect there to be
	// only as many primes as half of the upper bound.
	int* primes = new(int[upper_bound / 2]);
	int* exponents = new(int[upper_bound / 2]);

	// Initiate primes with the only even prime.
	primes[0] = 2;
	exponents[0] = 1;

	// Initiate the primes with the first odd prime.
	primes[1] = 3;
	exponents[1] = 2;

	// Count keeps track of the number of primes found
	// so far.
	int count = 2;


	// (1.) First, generate all primes that are less than or equal to
	// the bound. Save these within 'primes'.
	for (int candidate = 5; candidate <= upper_bound; candidate += 2)
	{

		// Assume a number is prime.
		bool isPrime = true;
		
		// We only need to conduct trial divison
		// up to the sqrt of the number in question.
		int div_bound = sqrt(candidate);
		
		for (int divisor = 3; divisor <= div_bound; divisor++)
		{
			if (candidate % divisor == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime)
		{
			primes[count] = candidate;
			exponents[count] = 1;
			count++;
		}
	}


	// (2.) Determine which prime factors (that are
	// within our array) to raise the exponents of.*
	for (int i = 0; i < count; i++)
	{
		// As long as increasing the exponentiation of a prime
		// does not result in that prime not exceeding the bound,
		// then increment the exponent.
		while (pow(primes[i],exponents[i]+1) < upper_bound)
		{
			exponents[i] += 1;
		}

	}


	long long answer = 1;
	for (int i = 0; i < count; i++)
	{
		answer *= pow(primes[i], exponents[i]);
		std::cout << primes[i] << " ^ " << exponents[i] << std::endl;
	}

	std::cout << answer;

	return 0;

}

/* NOTES:
  - For part 1 of the algorithm, we know that we will need
    at least one of each of the primes in order to ensure
	that the answer is divisible by all positive numbers
	less than or equal to the upper bound. Hence, the exponents
	are initiated to 1.
  - For part 2 of the algorithm, we are now trying to handle
    the composite numbers. There are (a) composite numbers which
	have only one prime factor (e.g. 2^4 or 3^2), (b) composite 
	numbers which have more than one prime factor, but only 
	include each factor once (e.g. 2*5, or 2*7), and (c) composite
	numbers that have more than one prime factor, but the factor
	might be included more than once (e.g. 2*3*3).
		
	(a) is clearly accounted for in part 2 of the algorithm, and (b)
	is already accounted for by including at least one of each prime
	factor. We also know that (c) is accounted for because when we
	account for (a), we are already including as many of each prime
	factor as possible. Thus, (c) numbers are ensured to have enough
	of each factor.