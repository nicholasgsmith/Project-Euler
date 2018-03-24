#include "SolutionTwo.h"
using namespace std;

int solutionTwo()
{
	int total = 0;
	int fibonacciOne = 1, fibonacciTwo = 2;

	//Find the sum of the even fibonacci numbers below 4000000
	while (fibonacciTwo < 4000000)
	{
		//Add to the total only if its even
		if (fibonacciTwo % 2 == 0)
		{
			total += fibonacciTwo;
		}

		//Calculate the next fibonacci number and store in in fibonacciTwo
		//Replace fibonacciOne with whatever was in fibonacciTwo
		fibonacciOne = fibonacciTwo + fibonacciOne;
		fibonacciTwo = fibonacciTwo + fibonacciOne;
		fibonacciOne = fibonacciTwo - fibonacciOne;
		fibonacciTwo = fibonacciTwo - fibonacciOne;
	}

	return total;
}
