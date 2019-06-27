#include "SolutionThirty.h"
using namespace std;

int solutionThirty()
{
	int digits[6];
	int total = 0;

	//Loop through the digits rather than the numbers
	//This is so we dont need to extract all the digits, just enough to verify whether or not the sum is valid
	for (digits[0] = 0; digits[0] <= 9; digits[0]++)
	{
		for (digits[1] = 0; digits[1] <= 9; digits[1]++)
		{
			for (digits[2] = 0; digits[2] <= 9; digits[2]++)
			{
				for (digits[3] = 0; digits[3] <= 9; digits[3]++)
				{
					for (digits[4] = 0; digits[4] <= 9; digits[4]++)
					{
						for (digits[5] = 0; digits[5] <= 9; digits[5]++)
						{
							int sum = pow(digits[0], 5) + pow(digits[1], 5) + pow(digits[2], 5) + pow(digits[3], 5) + pow(digits[4], 5) + pow(digits[5], 5);

							bool valid = true;

							//Extract each digit of the sum and check whether it matches the digits we have
							for (int ii = 0; ii < 6; ii++)
							{
								int modulo = pow(10, ii + 1);

								if (digits[ii] != (sum % modulo) / (modulo / 10))
								{
									valid = false;
									break;
								}
							}

							if (valid)
							{
								total += sum;
							}
						}
					}
				}
			}
		}
	}

	//We dont include 1 per the instructions
	return total - 1;
}
