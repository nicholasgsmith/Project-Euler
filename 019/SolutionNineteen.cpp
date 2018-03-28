#include "SolutionNineteen.h"
using namespace std;

int solutionNineteen()
{
	//Starts of 1 as days % 7 == 1 means Monday
	int day = 1;
	//Days in each month
	int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int mondayFirsts = 0;

	//Go through 1900 which we do not include
	//We start in 1900 as we know that 1st of Jan 1900 was a Monday
	for (int month = 0; month != 12; month++)
	{
		day += monthDays[month];
	}

	//Go through each of the years from 1901 to 2000
	for (int years = 0; years != 100; years++)
	{
		//Go through the 12 months
		for (int month = 0; month != 12; month++)
		{
			//Add the days in each month to the total so we are always on a 1st
			//If it is a Sunday then the total number of days % 7 is 0
			day += monthDays[month];
			if (day % 7 == 0)
			{
				mondayFirsts++;
			}
		}
	}

	return mondayFirsts;
}
