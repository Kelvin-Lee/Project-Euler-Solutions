#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

int main() {

	/*
		   PROBLEM NUMBER : 4

			PROBLEM TITLE : " Largest palindrome product "

		PROBLEM STATEMENT : " A palindromic number reads 
							  the same both ways. The largest 
							  palindrome made from the product 
							  of two 2-digit numbers is 
							  9009 = 91 × 99.

							  Find the largest palindrome made 
							  from the product of two 3-digit 
							  numbers."

				 SOLUTION : " 906609 "

	*/

	clock_t begin = clock();
	int max = 0;

	// This iterates downwards large products to lower
	// products, and checks each number for the palindromic
	// characteristic.
	for (int i = 999; i > 100; i--) 
	{
		// We can start j at the greatest multiple
		// of 11 that is <= 999, and decrement it
		// by 11. Algebra is shown below in the NOTES.
		for (int j = 990; j > 100; j-=11) 
		{

			bool isPalindrome = true;

			long n = i * j;

			// If n is not large enough, it is not
			// of interest to check.
			if (n <= max)
			{
				break;
			}

			//Check if the number is a palindrome.
			std::string s = std::to_string(n);
			for (int i = 0; i < s.length(); i++) 
			{
				//Compare the ith digit/character with
				// the ith digit/character from the back.
				if (s[i] != s[s.length() - i - 1]) 
				{
					isPalindrome = false;
					break;
				}
			}

			// If it is a palindrome, and has gotten this
			// far, then it must be greater than n.
			if (isPalindrome) 
			{
				max = n;
			}
		}
	}

	clock_t end = clock();
	double secs = end - begin / CLOCKS_PER_SEC;
	std::cout << secs << std::endl;
	std::cout << max << std::endl;
	return 0;

}

/* Notes

 - The decrementation of j depends on the assumption
   that the largest palindrome is at least 6 digits in
   length. It is lucky that the largest palindrome is 
   indeed 6 digits. However, if we did not know one existed,
   j ought to be decremented normally.

   We are able to decrement by 11 because:

	Let x, y and z be the digits of our 6-digit palindrome,
	written ax 'xyzzyx'. The numerical value can be expressed 
	as:

		100000x + 10000y + 1000z +100z +10y + 1x 
	  = 100001x + 10010y + 1100 z
	  = 11 ( 9091x + 910y + 10z)

   This means that 11 must be a factor of our 6 digit palindrome.
   We let j be that factor, and thus, restrict it only to multiples
   of 11.

   */

	


