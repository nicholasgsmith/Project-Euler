include "SolutionTwelve.h"
using namespace std;

long long solution()
{
	long long  triangle = 1;
	int counter = 1;

	//We are looking for the first trinagle number with more than or 500 factors
	while (numberOfFactors(triangle) < 500)
	{
		//Ths calculates the next triangle number
		counter++;
		triangle += counter;
	}

	return triangle;
}
