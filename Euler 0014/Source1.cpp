#include <iostream>
#include <unordered_map>
#include <ctime>

typedef std::unordered_map<unsigned long, unsigned int> hash;

unsigned int calcRank(unsigned long n, unsigned int count, hash* table);

int main(){

	hash* ranks = new(hash);
	ranks->insert({ 1, 1 });

	unsigned int max = 1;
	unsigned int temp_max = 0;
	unsigned int num = 1;

	clock_t begin = clock();
	for (unsigned int i = 500000; i < 1000000; i++)
	{
		temp_max = calcRank(i, 1, ranks);
		if (temp_max > max)
		{
			num = i;
			max = temp_max;
		}
	}
	clock_t end = clock();
	double seconds = end - begin / CLOCKS_PER_SEC;
	std::cout << "Clock: " << seconds << std::endl;

	std::cout << num << " produces the longest chain of " << max << " numbers." << std::endl;

	return 0;
}

unsigned int calcRank(unsigned long n, unsigned int count, hash* table)
{
	// If the rank has already been determined for n
	if (table->count(n) > 0)
	{
		//std::cout << n << " already determined to be " << table->at(n) << std::endl;
		return table->at(n);
	}

	// Else, the rank has not been determined
	else
	{
		if (fmod(n, 2) == 0)
		{
			count = count +  calcRank(n / 2, count, table);
			table->insert({ n, count });
			return count;
		}

		else
		{
			count = count + calcRank(3 * n + 1, count, table);
			table->insert({ n, count });
			return count;
		}

	}
}