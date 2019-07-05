#include "SolutionThirtyTwo.h"
using namespace std;

int solutionThirtyTwo()
{
	//Array of digits to look at permutations of
	int digits[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//Set to store answers, a set is used so we cannot have duplicates
	set<int> answers;

	//Look through each permutation
	while (next_permutation(digits, digits + 9))
	{
		//The product will always be 4 digits, and the multiplicand and multiplier 2 and 3 or 1 and 4

		//Set the multiplicand to the first 2 digits, the multiplier the next 3 and the product the final 4
		int multiplicand = (digits[0] * 10) + digits[1];
		int multiplier = (digits[2] * 100) + (digits[3] * 10) + digits[4];
		int product = (digits[5] * 1000) + (digits[6] * 100) + (digits[7] * 10) + digits[8];

		//Check if valid
		if (multiplicand*multiplier == product)
		{
			answers.insert(product);
		}

		//Set the multiplicand to the first digit, the multiplier the next 4 and the product the final 4
		multiplicand = digits[0];
		multiplier = (digits[1] * 1000) + (digits[2] * 100) + (digits[3] * 10) + digits[4];
		product = (digits[5] * 1000) + (digits[6] * 100) + (digits[7] * 10) + digits[8];

		//Check if valid
		if (multiplicand*multiplier == product)
		{
			answers.insert(product);
		}

	}

	int total = 0;

	//Sum all valid products
	for (set<int>::iterator i = answers.begin(); i != answers.end(); i++) {
		total += *i;
	}

	return total;
}
