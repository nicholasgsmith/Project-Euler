#include "solutionFour.h"
using namespace std;

int solutionFour()
{
	int largest = 0;

	//Go through each number from 100 to 1000 twice
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			//Check if their product is greater than our current largest
			if (i*j > largest)
			{
				//If their product is also a palindrome it replaces our current largest
				if (palindrome(i*j))
				{
					largest = i*j;
				}
			}
		}
	}

	return largest;
}
