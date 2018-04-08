#include "SolutionTwentyThree.h"
using namespace std;

long long solutionTwentyThree()
{
	vector <int> abundantNumbers;
	const int limit = 28124;

	//Find every abundant number below our know upper limit
	for (int i = 0; i != limit; i++)
	{
		if (sumOfFactors(i) > i)
		{
			abundantNumbers.push_back(i);
		}
	}

	bool sumOfAbundant[limit];

	//To start with we assume all number are not the sum of two abundant ones
	for (int i = 0; i != limit; i++)
	{
		sumOfAbundant[i] = false;
	}

	//Go through each combination of abundant numbers and record the sum
	for (int i = 0; i != abundantNumbers.size(); i++)
	{
		for (int j = i; j != abundantNumbers.size(); j++)
		{
			if (abundantNumbers[i] + abundantNumbers[j] < limit)
			{
				sumOfAbundant[abundantNumbers[i] + abundantNumbers[j]] = true;
			}
		}
	}

	long long total = 0;

	//Sum all numbers that were not the sum of two abundant numbers
	for (int i = 0; i != limit; i++)
	{
		if (!sumOfAbundant[i])
		{
			total += i;
		}
	}

	return total;
}
