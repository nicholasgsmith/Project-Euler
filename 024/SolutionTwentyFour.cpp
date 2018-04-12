#include "SolutionTwentyFour.h"
using namespace std;

long long solutionTwentyFour()
{
	int digits[10];

	int swapOne = 9;
	int swapTwo = 8;

	//Each digit is stored as an element in this array. We start off with 0123456789
	for (int i = 0; i != 10; i++)
	{
		digits[i] = i;
	}

	//We perform a million-1 swaps
	//In order to get the next permutation we need to swap the 2 least significant digits where the less significant of the 2 is larger than than the other
	//We then need to sort everything less significant than the more significant digit of the 2 swapped
	for (int i = 0; i != 999999; i++)
	{
		swapOne = 9;
		swapTwo = 8;

		//Here we find the 2 least significant digits where the rightmost is smaller than the leftmost
		while (digits[swapOne] <= digits[swapTwo])
		{
			if (swapOne > swapTwo + 1)
			{
				swapOne--;
			}
			else
			{
				swapOne = 9;
				swapTwo--;
			}
		}

		//We perform the swap
		int temp = digits[swapOne];
		digits[swapOne] = digits[swapTwo];
		digits[swapTwo] = temp;

		//We sort the half of the array to the right of the first digit swapped
		sortArray(&digits[swapTwo + 1], 9 - swapTwo, true);
	}

	long long result = 0;
	long long multiplier = 1;

	//Convert the array to a variable result
	for (int i = 0; i != 10; i++)
	{
		result += digits[9 - i] * multiplier;
		multiplier *= 10;
	}

	return result;
}
