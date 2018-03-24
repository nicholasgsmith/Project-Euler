#include "SolutionThree.h"
using namespace std;

int solutionThree()
{
	long long number = 600851475143;
	int largest = 0;

	//Go throguh each integer up to half of number
	//We will never run this many iterations but it is good practise in case number is prime, if this is the case we save a ton of expensive iterations
	for (int i = 2; i < number / 2; i++)
	{
		if (prime(i))
		{
			//If i is prime continually divide number by it until it is not a factor of number
			while (number % i == 0)
			{
				number /= i;
			}

			//Record the largest prime that divides number
			if (i > largest)
			{
				largest = i;
			}
		}
	}

	//Whatever is left in number is also prime (or 1) and therefore could also be the largest
	if (number > largest)
	{
		largest = number;
	}

	return largest;
}
