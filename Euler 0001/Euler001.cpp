#include <iostream>

int main()
{

	/* Sums up all of the positive integers up to the upper_bound
	   that are divisible by 3 or 5. If a number is divisible by both 
	   3 and 5 (e.g. 15), then it is only added once.
	*/

	// Hard-coded upper-bound.
	const int upper_bound = 1000;

	int sum = 0;

	// For all of the number between 0 and the upper bound...
	for (int i = 0; i < upper_bound; i++) {

		// If the number is divisible by 3 or is divisible by 5...
		if (i % 3 == 0 || i % 5 == 0)

		{
			// Add it to the running sum.
			sum += i;
		}
	}
	
	// Print out the sum.
	std::cout << sum << std::endl;

	return sum;
}

/* Notes:

 - In the future, I'd like to code a more general solution that
   has the user input choices for divisors, and also allows them
   to choose an upper bound.

*/
