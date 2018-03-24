include "SolutionTen.h"
using namespace std;

long long solution()
{
	long long total = 0;
	bool* numbers = new bool[2000001];
	//Sets b[i] to be true if i is prime
	findPrimes(numbers, 2000001);

	//Sum up all loctions where b[i] is true e.g. i is prime
	for (int i = 0; i != 2000001; i++)
	{
		if (numbers[i])
		{
			total += i;
		}
	}

	return total;
}
