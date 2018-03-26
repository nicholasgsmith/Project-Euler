#include "SolutionNine.h"
using namespace std;

int solutionNine()
{
	int product = 0;
	int i = 2, j = 2;

	//Go through each combinations i,j,k s.t. i+j+k=1000
	//We loop through i and j as normal and then rig k to be whatever it needs to be to ensure the total is 1000
	for (i = 2; 1000 - (2*i) >= 1; i++)
	{
		for (j = i; 1000 - i - j >= 1; j++)
		{
			int k = 1000 - i - j;

			//We check is i,j and k form an equalatrial triangle
			//There is only one solution so we break once weve found it
			if (pow(i, 2) + pow(j, 2) == pow(k, 2))
			{
				product = k*j*i;
				break;
			}
		}
	}

	return product;
}
