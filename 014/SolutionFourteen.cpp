#include "SolutionFourteen.h"
using namespace std;

long long solutionFourteen()
{
	bool seen[1000000];
	long long largestChain = 0, largestValue = 0;

	//To begin we set each number to have not yet been looked at
	for (int i = 0; i != 1000000; i++)
	{
		seen[i] = false;
	}

	//We go through each number
	for (int i = 1; i != 1000000; i++)
	{
		//We only examine number that have not yet been seen
		//If a number, x, has been seen then it must have been on the chain of a number, y, that has already been checked
		//In this case y always has a longer chain than x so there is no point checking x
		if (!seen[i])
		{
			long long workingValue = i;
			long long chainCounter = 1;
			seen[workingValue] = true;

			//We go through the chain of the number until we reach 1
			while (workingValue != 1)
			{
				if (workingValue % 2 == 0)
				{
					workingValue /= 2;
				}
				else
				{
					workingValue = (workingValue * 3) + 1;
				}

				chainCounter++;

				//Along the way each value on the chain can be checked as seen, as its chain will never be longer than the current number
				if (workingValue < 10)
				{
					seen[workingValue] = true;
				}
			}

			//Upon finishing the chain we check if it is the longest we have found so far
			if (chainCounter > largestChain)
			{
				largestChain = chainCounter;
				largestValue = i;
			}
		}
	}

	return largestValue;
}
