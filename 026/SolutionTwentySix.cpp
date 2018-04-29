#include "SolutionTwentySix.h"
using namespace std;

int solutionTwentySix()
{
	int largestDenominator = 1;
	int largestCount = 0;
	int start = 1;
	int result = 0;
	int counter = 0;
	int seen[1000];

	//Go through each denominator
	for (int i = 2; i != 1000; i++)
	{
		//Reset the start value and counter
		start = 1;
		counter = 0;

		//Reset previously seen digits
		for (int j = 0; j != 1000; j++)
		{
			seen[j] = 0;
		}

		//Contiually multiply by ten and attempt to divide until we find a starting value we had previously seen
		while (seen[start] == 0)
		{
			seen[start] = counter;
			start = (start * 10) % i;
			counter++;
		}

		//Our recurring sequence is then the counter minus the location it was last seen at
		result = counter - seen[start];

		//Check if thats the largest recurring sequence
		//If result is 0, it divided perfectly and so is not recurring
		if (result > largestCount && result != 0)
		{
			largestCount = result;
			largestDenominator = i;
		}
	}

	return largestDenominator;
}
