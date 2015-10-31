#include <iostream>
#include <vector>

int main() {

	std::cout << "Which prime do you want to find (1st ('1'), 2nd ('2'), etc.)?: ";
	int bound = 0;
	std::cin >> bound;

	std::vector<long> primes;
	primes.push_back(2);
	long l_last = primes.back();

	do 
	{

		l_last += 1;

		bool isPrime = true;
		
		for (int i = 0; i < primes.size(); i++)
		{
			if (fmod(l_last, primes[i]) == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			primes.push_back(l_last);
			l_last = primes.back();
		}

	} while (primes.size() < bound);

	std::cout << primes.back();

	return 0;

}