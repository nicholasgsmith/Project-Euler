include "SolutionSixteen.h"
using namespace std;

int solutionSixteen()
{
	//2^3 = 8 < 10 so an upperlimit for the number of digits can be estimated to 333
	//We have 334 elemts to provide 1 extra to ensure we dont overstep our array later
	int digits[334];

	//The digits are intialised to 0 except for the first which is set to 1 e.g 2^0
	for (int i = 0; i != 334; i++)
	{
		digits[i] = 0;
	}
	digits[0] = 1;

	//We perfom 1000 iterations, each of which mutiple the number by 2
	for (int i = 0; i != 1000; i++)
	{
		//We go through the 333 digits we need (the 334th is for overflow)
		for (int j = 332; j != -1; j--)
		{
			//Each is multipled by 2 and then reduced to a single digit by subtracting 10 if needed
			//If ten is subbed 1 is added to the next digit as overflow
			digits[j] *= 2;
			if (digits[j] >= 10)
			{
				digits[j] -= 10;
				digits[j + 1]++;
			}
		}
	}

	//The digits are summed
	int total = 0;
	for (int i = 0; i != 333; i++)
	{
		total += digits[i];
	}

	return total;
}
