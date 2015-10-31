#include <iostream>
#include <string>
#include <typeinfo>

/* Things you learned here:
 * - Something about std::stringstream, and how it's a safer
 *   method for reading in individual chars from a string
 *   stream?
 * - the "int n_num = c_char - '0'" method seems to be safe
 *   due to something along the lines of everyone using
 *   ASCII? And not Unicode?
 * - needed long long! because of how big it could get :0
*/


long long multNextNChar(int index, int n, std::string s);

int main() {

	std::string s_number =
		"73167176531330624919225119674426574742355349194934"
		"96983520312774506326239578318016984801869478851843"
		"85861560789112949495459501737958331952853208805511"
		"12540698747158523863050715693290963295227443043557"
		"66896648950445244523161731856403098711121722383113"
		"62229893423380308135336276614282806444486645238749"
		"30358907296290491560440772390713810515859307960866"
		"70172427121883998797908792274921901699720888093776"
		"65727333001053367881220235421809751254540594752243"
		"52584907711670556013604839586446706324415722155397"
		"53697817977846174064955149290862569321978468622482"
		"83972241375657056057490261407972968652414535100474"
		"82166370484403199890008895243450658541227588666881"
		"16427171479924442928230863465674813919123162824586"
		"17866458359124566529476545682848912883142607690042"
		"24219022671055626321111109370544217506941658960408"
		"07198403850962455444362981230987879927244284909188"
		"84580156166097919133875499200524063689912560717606"
		"05886116467109405077541002256983155200055935729725"
		"71636269561882670428252483600823257530420752963450";

	std::cout << "How many factors?";
	int temp;
	std::cin >>temp;
	const int n_of_factors(temp);


	long long curr = 0;
	long long max = 0;

	for (int i = 0; i < s_number.size() - n_of_factors; i++) {
		curr = multNextNChar(i, n_of_factors, s_number);
		if (curr > max) {
			max = curr;
		}
	}

	std::cout << max << std::endl;

	return 0;

}

long long multNextNChar(int index, int n, std::string s) {
	long long product = 1;

	for (int i = 0; i < n; i++) {
		int j = index + i;

		if (j > s.size() - 1) {
			std::cout << "UH OH" << std::endl;
			break;
		}
		else {
			product *= s.at(index + i) - '0';
		}
	}

	if (product > pow(10, n))
	{
		return -1;
	}

	return product;
}