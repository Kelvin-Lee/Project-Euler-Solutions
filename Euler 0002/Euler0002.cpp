#include <iostream>

int main() {


	// Initiate the sequence, according to the above definition.
	int prev1 = 1;
	int prev2 = 2;

	// curr is the current fibonnaci number that we are inspecting
	// and testing for evenness.
	int curr = 2;
	int sum = 0;

	// For as long as the terms are less than 4000000...
	for (; curr < 4000000; ) {

		// If the number is even, then add it to the sum
		if (curr % 2 == 0) {
			sum = curr + sum;
		}

		// Progress the sequence.
		curr = prev1 + prev2;
		prev1 = prev2;
		prev2 = curr;

	}

	std::cout << sum;

	return 0;
}

/* Notes:

- N/A

*/
