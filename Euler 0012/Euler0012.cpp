#include <iostream>

int factorAndMultExponents(unsigned long n);

int main() {

	while (true)
	{
		for (int i = 1; true; i++)
		{
			unsigned long num = i * (i + 1) / 2;
			std::cout << "Checking: " << num << std::endl;
			int count = factorAndMultExponents(num);
			if (count >= 500)
			{
				std::cout << "Returning: " << num << std::endl;
				return i;
			}

			else
			{
				std::cout << "Only found " << count << std::endl;
			}
		}
	}

}

int factorAndMultExponents(unsigned long n)
{
	int product = 1;
	for (int i = 2; n != 1; i++)
	{
		int count = 0;
		bool isDivisible = false;
		while (fmod(n, i) == 0)
		{
			std::cout << i << " divides " << n << std::endl;
			n = n / i;
			count++;
			isDivisible = true;
		}

		if (isDivisible)
		{
			product *= (count+1);
		}

	}

	return product;
}
