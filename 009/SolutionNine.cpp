include "SolutionNine.h"
using namespace std;

int solutionNine()
{
	int product = 0;
	int i = 2, j = 2;

	for (i = 2; 1000 - (2*i) >= 1; i++)
	{
		for (j = i; 1000 - i - j >= 1; j++)
		{
			int k = 1000 - i - j;

			if (pow(i, 2) + pow(j, 2) == pow(k, 2))
			{
				product = k*j*i;
			}
		}
	}

	return product;
}
