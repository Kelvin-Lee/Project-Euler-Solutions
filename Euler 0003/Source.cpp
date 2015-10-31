#include <iostream>

int main() {

	const int seed = 100;
	double sum_1 = 0;
	double sum_2 = 0;

	{
		int n = 0;
		for (int i = 0; i <= seed; i++) {
			n = n + i;
		}

		sum_1 = n*n;
		printf("%lf\n", sum_1);
	}

	for (int i = 0; i <= seed; i++) {
		sum_2 = sum_2 + (i * i);
	}
	printf("%lf\n", sum_2);

	printf("%lf\n", sum_1 - sum_2);


}