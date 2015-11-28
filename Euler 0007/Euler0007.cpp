#include <iostream>
#include <ctime>

int main() {

	#define BOUND 10001

	// Hard-coded the length of the arry (must be known at
	// compile time anyways).
	unsigned long primes[BOUND];

	// Inserted 2, the only even prime.
	primes[0] = 2;

	// Inserted 3, the first odd prime.
	primes[1] = 3;

	// Initialize the count to 2, the number
	// of primes currently in our array.
	int count = 2;

	// Initialize candidate i.e. the number in which 
	// we are testing the primality of.
	unsigned long candidate = 5;

	clock_t begin = clock();
	do 
	{
		// Assume it is prime unless proven otherwise in
		// the following for-loop.
		bool isPrime = true;

		// We use trial division using all odd numbers from
		// 3 to the smallest integer greater than or
		// equal to the root of the candidate.

		int div_bound = ceil(sqrt(candidate));
		for (int i = 3; i <= div_bound; i+=2)
		{
			if (candidate % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		// If the candidate is prime
		if (isPrime)
		{

			// Then we add it to the array,
			// and increment the count.
			primes[count] = candidate;
			count++;
		}

		// We check only odd numbers.
		candidate += 2;

	} while (count < BOUND);

	clock_t end = clock();
	double secs = end - begin / CLOCKS_PER_SEC;
	std::cout << secs << std::endl;
	std::cout << primes[BOUND - 1];

	return 0;

}

/* NOTES:

 - At one point had the for-loop's conditional set to
   " i < bound", but this excludes perfect squares.
 - Arrays must have a declared size at compile-time, 
   unless dynamically allocated (I assume).
 - Had a previous version that did the same thing, but
   used an std::vector. Much slower, presumably due to 
   the index-out-of-range checking, as well as the resizing.
 - This one helped me appreciate how expensive function calls
   are as well. For example, calling ceil() and sqrt() 
   within the for-loop's conditional multiple times 
   makes the program run about 8x-9x slower.

   */
