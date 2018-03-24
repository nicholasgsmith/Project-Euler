#include "SolutionOne.h"
using namespace std;

int solutionOne()
{
	int total = 0;

	//Go through each number from 0 to 1000
	for (int i = 0; i != 1000; i++)
	{
		//If any are divisible by 5 or 3 they are added to the total
		if (i % 5 == 0 || i % 3 == 0)
		{
			total += i;
		}
	}

	return total;
}
