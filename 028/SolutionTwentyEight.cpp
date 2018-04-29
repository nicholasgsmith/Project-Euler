#include "SolutionTwentyEight.h"
using namespace std;

long long solutionTwentyEight()
{
	//Start off at the end with 1001^2
	int counter = 1002001;
	long long total = 0;

	//Go through each nxn hollow square starting from 1001x1001
	//We deduct 2 each time
	for (int square = 1000; square > 0; square -= 2)
	{
		//For the sides of the square we add on the counter, decuting n-1 each time
		for (int i = 0; i != 4; i++)
		{
			total += counter;
			counter -= square;
		}
	}

	return total;
}
