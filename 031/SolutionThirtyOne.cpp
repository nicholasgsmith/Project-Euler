#include "SolutionThirtyOne.h"
using namespace std;

int addCoin(int coinTotal, int startValue)
{
	//Coin values in pence (not including £2)
	int values[7] = { 100, 50, 20, 10, 5, 2, 1 };
	int combinations = 0;

	//Loop through the coin values and add them to the existing total
	//We set ii to be the parameter startValue, which when the function is recursively called is the current ii
	//This means that all coins added after a coin, x, are <= x, as the values array is in descending order
	//As a result the coins making up coinTotal are in descending order which prevents combinations being added twice
	//E.g. 100,50,50 is fine, 50,100,50 is not and would not be checked even though it equals 200 as the coins are not descending
	for (int ii = startValue; ii < 7; ii++)
	{
		const int newTotal = coinTotal + values[ii];

		if (newTotal == 200)
		{
			combinations++;
		}
		else if (newTotal < 200)
		{
			//Recursively call function with new start total
			//Use ii as the start value to ensure combinations are not reallowed in new orders
			combinations += addCoin(newTotal, ii);
		}
	}

	return combinations;
}

int solutionThirtyOne()
{
	//Add one to take into account just a £2 coin
	return addCoin(0, 0) + 1;
}
