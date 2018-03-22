include "SolutionTen.h"
using namespace std;

long long solution()
{
	long long total = 0;
	bool* numbers = new bool[2000001];
	findPrimes(numbers, 2000001);

	for (int i = 0; i != 2000001; i++)
	{
		if (numbers[i])
		{
			total += i;
		}
	}

	return total;
}
