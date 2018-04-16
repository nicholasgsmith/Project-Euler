#include "SolutionTwentyFive.h"
using namespace std;

long long solutionTwentyFive()
{
	//We will have each element store 5 digits, basically like using base 100000
	//We have 3 vectors, one to store the reult and two to store the previous fib numbers
	vector<int> fib[3];
	for (int i = 0; i != 3; i++)
	{
		fib[i].push_back(1);
	}

	//Number of ints in each vector
	int size = 1;

	//Current fib index. We start on 2 as we begin with three 1's and 1 is the first and second index
	int counter = 2;

	//We continually loop until we find the result
	while (1)
	{
		//We loop 3 times, each iteration a different vector is the result vector
		for (int i = 0; i != 3; i++)
		{
			//We set the result vector to be the sum of the other two
			for (int j = 0; j != size; j++)
			{
				fib[i][j] = fib[(i + 1) % 3][j] + fib[(i + 2) % 3][j];
			}

			//After a sumation we need to ensure that each vector element contains only 5 digits
			for (int j = 0; j != size; j++)
			{
				//If they exceed5 digits deduct 100000 from the element and add 1 to the next element
				while (fib[i][j] >= 100000)
				{
					//If the vectors are too small we add a new element to each
					if (j + 1 == size)
					{
						size++;
						fib[i].push_back(0);
						fib[(i + 1) % 3].push_back(0);
						fib[(i + 2) % 3].push_back(0);
					}

					fib[i][j] -= 100000;
					fib[i][j + 1]++;
				}
			}

			//Increment the counter
			counter++;

			//If the size is 200 and the final element has 5 digits then out fib number has 1000 digits
			if (size == 200)
			{
				if (fib[i][199] >= 10000)
				{
					return counter;
				}
			}
		}
	}

	return 0;
}
