#include <iostream>

int main() {

	unsigned long max = 0;
	unsigned long num = 0;

	for (unsigned long i = 1; i < 1000000; i++)
	{
		unsigned long temp = i;
		short count = 1;
		while (temp != 1)
		{
			if (temp % 2 == 0)
			{
				temp = temp / 2;
				count++;
			}

			else
			{
				temp = temp * 3 + 1;
				count++;
			}

		}

		if (count > max)
		{
			max = count;
			num = i;
		}
	}

	std::cout << num << " produces " << max << " numbers." << std::endl;

	return 0;
}