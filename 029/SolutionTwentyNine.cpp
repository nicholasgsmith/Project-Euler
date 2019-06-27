#include "SolutionTwentyNine.h"
using namespace std;

int solutionTwentyNine()
{
	int totalValues = 0;

	//4, 9, 25, 36, 49, 100
	int powTwo = 6;

	//8, 27, 
	int powThree = 2;

	//16, 81
	int powFour = 2;

	//32
	int powFive = 1;

	//64
	int powSix = 1;

	int numAllUnique = 99 - powTwo - powThree - powFour - powFive - powSix;

	return (99 * numAllUnique) + (powTwo * 50) + (powThree * 50) + (powFour * 44) + (powFive * 55) + (powSix * 27);
}
