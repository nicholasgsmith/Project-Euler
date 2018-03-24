#include "SolutionSix.h"
using namespace std;

int solutionSix()
{
	long long squares = 0;
	long long sum = 0;

	//Find the sum and sum of the squares of the first 100 integers
	for (int i = 1; i < 101; i++)
	{
		squares += pow(i, 2);
		sum += i;
	}

	//Return the sum squared minus the sum of the squres
	return pow(sum, 2) - squares;
}
