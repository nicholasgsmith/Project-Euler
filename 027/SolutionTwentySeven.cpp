#include "SolutionTwentySeven.h"
using namespace std;

int solutionTwentySeven()
{
	int maxCounter = 0;
	int currentA = 0;
	int currentB = 0;

	//Go through each posibility
	//Since negatives are not prime b must be >= 0 and a >= -b as otherwise for a = 1 the result will be negative
	for (int b = 0; b != 1000; b++)
	{
		for (int a = -b; a != 1000; a++)
		{
			int n = 0;
			int counter = 0;

			//Count the number of consecutive primes
			while (prime((n*n) + (a*n) + b))
			{
				counter++;
				n++;
			}

			//If we have a new maximum record it
			if (counter > maxCounter)
			{
				maxCounter = counter;
				currentA = a;
				currentB = b;
			}
		}
	}

	return currentA * currentB;
}
