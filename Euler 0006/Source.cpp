#include <iostream>

int main() {

	/*     PROBLEM TITLE : " Sum square difference "

	   PROBLEM STATEMENT : " The sum of the squares of the first 
							 ten natural numbers is,

							 1^2 + 2^2 + ... + 10^2 = 385

							The square of the sum of the first 
							ten natural numbers is,

							(1 + 2 + ... + 10)2 = 552 = 3025

							Hence the difference between the sum of 
							the squares of the first ten natural 
							numbers and the square of the sum is 
							3025 ? 385 = 2640.

							Find the difference between the sum of the 
							squares of the first one hundred natural 
							numbers and the square of the sum. "


				SOLUTION : " 25164150 "

	*/

	// Hard-coded upper-bound.
	const int upper_bound = 100;

	// Initialize sums to 0.
	long square_of_sum = 0;
	long sum_of_squares = 0;

	// 1. Calculate the square of the entire sum.
	{
		int n = 0;
		// Calculate the entire sum.
		for (int i = 0; i <= upper_bound; i++) {
			n = n + i;
		}

		// Square the sum.
		square_of_sum = n*n;

	}

	// 2. Sum up the square of each number.
	for (int i = 0; i <= upper_bound; i++) {

		// Add the square of each number to the sum.
		sum_of_squares = sum_of_squares + (i * i);

	}
	
	std::cout << "(1)  Square of sum: " << square_of_sum << std::endl;
	std::cout << "(2) Sum of squares: " << sum_of_squares << std::endl;
	std::cout << "Difference between (1) and (2): " << square_of_sum - sum_of_squares << std::endl;

}

/* Notes:

 - N/A

 */