#include "SolutionTwenty.h"
using namespace std;

int solutionTwenty()
{
	//Since 100! is too large to store in one variable we will store it across several small ones

	//When multipling by 1-10 we at most add 1 digit. When multiplying by 11-100 we at most add 2 digits
	//Hence an upper bound for the numner of digits can be approxmiated to 190. Then we store 10 digits per long long we need at most 19 long longs
	long long factoral[19];

	//Set the value to be 1 at the beginning
	for (int i = 1; i != 19; i++)
	{
		factoral[i] = 0;
	}
	factoral[0] = 1;

	//Multiply by 100!. We can pretend that the the long long as element i has (i*10) 0's after it
	//Since the sum of these didigts is 0, and 0*x = 0, we can ignore them
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 18; j >= 0; j--)
		{
			factoral[j] *= i;
			while (factoral[j] >= 10000000000)
			{
				factoral[j] -= 10000000000;
				factoral[j + 1]++;
			}
		}
	}


	//Sum the digits
	int digits = 0;
	for (int i = 0; i != 19; i++)
	{
		digits += sumDigits(factoral[i]);
	}

	return digits;
}
