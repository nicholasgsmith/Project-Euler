#include "SolutionSix.h"
using namespace std;

int solutionSix()
{
	long long squares = 0;
	long long sum = 0;

	for (int i = 1; i < 101; i++)
	{
		squares += pow(i, 2);
		sum += i;
	}

	return pow(sum, 2) - squares;
}
