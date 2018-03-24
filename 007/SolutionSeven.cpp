include "SolutionSeven.h"
using namespace std;

int solutionSeven()
{
	int counter = 0;
	int currentInteger = 1;

	//Keep looping until we have found over 10000 primes
	while (counter != 10001)
	{
		currentInteger++;

		//Whenever we find a prime increment the counter
		if (prime(currentInteger))
		{
			counter++;
		}
	}

	return currentInteger;
}
