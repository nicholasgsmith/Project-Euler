#include "SolutionTwentyTwo.h"
using namespace std;

int solutionTwentyTwo()
{
	int amicableTotal = 0;
	int factors = 0;

	//Go through each number, calculate its factor sum and then calulate the factor sum of that
	for (int i = 2; i != 10000; i++)
	{
		factors = sumOfFactors(i);
		//Make sure that if a number if amicable with itself that it doesnt count
		if (i == sumOfFactors(factors) && factors != i)
		{
			amicableTotal += i;
		}
	}

	return amicableTotal;
}
