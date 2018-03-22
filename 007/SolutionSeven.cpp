include "SolutionSeven.h"
using namespace std;

int solutionSeven()
{
	int counter = 0;
	int currentInteger = 1;

	while (counter != 10001)
	{
		currentInteger++;

		if (prime(currentInteger))
		{
			counter++;
		}
	}

	return currentInteger;
}
