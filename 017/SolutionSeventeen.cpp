#include "SolutionSeventeen.h"
using namespace std;

int solutionSeventeen()
{
	int letters = 0;
	string numAsTex1To9[9] = { "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
	string numAsText10To19[10] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
	string numAsTex20To90[8] = { "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
	string hundred = "Hundred";
	string and = "And";

	//1 to 9
	for (int i = 0; i != 9; i++)
	{
		letters += numAsTex1To9[i].length();
	}

	//10 to 19
	for (int i = 0; i != 10; i++)
	{
		letters += numAsText10To19[i].length();
	}

	//20 to 99
	for (int i = 0; i != 8; i++)
	{

		//20,30,...
		letters += numAsTex20To90[i].length();

		//21,22,...,31,32,...
		for (int j = 0; j != 9; j++)
		{
			letters += numAsTex20To90[i].length();
			letters += numAsTex1To9[j].length();
		}
	}

	//100 to 999
	for (int i = 0; i != 9; i++)
	{
		//100,200,...
		letters += numAsTex1To9[i].length();
		letters += hundred.length();

		for (int j = 0; j != 9; j++)
		{
			//101,102,...,201,202,...
			letters += numAsTex1To9[i].length();
			letters += hundred.length();
			letters += and.length();
			letters += numAsTex1To9[j].length();
		}

		for (int j = 0; j != 10; j++)
		{
			//110,111,...,210,211,...
			letters += numAsTex1To9[i].length();
			letters += hundred.length();
			letters += and.length();
			letters += numAsText10To19[j].length();
		}

		for (int j = 0; j != 8; j++)
		{
			//120,130,...,220,230,...
			letters += numAsTex1To9[i].length();
			letters += hundred.length();
			letters += and.length();
			letters += numAsTex20To90[j].length();

			for (int k = 0; k != 9; k++)
			{
				//121,122,...,131,132,...
				letters += numAsTex1To9[i].length();
				letters += hundred.length();
				letters += and.length();
				letters += numAsTex20To90[j].length();
				letters += numAsTex1To9[k].length();
			}
		}
	}

	//1000
	letters += 11;

	return letters;
}
