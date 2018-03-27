#include "SolutionEighteen.h"
using namespace std;

int solutionEighteen()
{
	string numbers = "759564174782183587102004824765190123750334880277730763679965042806167092414126568340807033414872334732371694295371446525439152975114701133287773177839681757917152381714914358502729486366046889536730731669874031046298272309709873933853600423";

	int rows[15][15];
	int currentNumber = 0;

	//We loop through the string and extract the numbers. Each row in the triangle has its own row in our 2d array
	for (int i = 0; i != 15; i++)
	{
		for (int j = 0; j != i + 1; j++)
		{
			rows[i][j] = toInt(numbers.substr(currentNumber, 2));
			currentNumber += 2;
		}
	}

	//Each row from second bottom to top is then gone through
	//Each cells value is increased by the value of its larges subtree
	for (int i = 13; i != -1; i--)
	{
		for (int j = 0; j != i + 1; j++)
		{
			rows[i][j] += max(rows[i + 1][j], rows[i + 1][j + 1]);
		}
	}

	return rows[0][0];
}
