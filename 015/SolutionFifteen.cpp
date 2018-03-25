include "SolutionFifteen.h"
using namespace std;

long long solutionFifteen()
{
	//A (n,m) grid has paths through it equal to (n-1,m)+(n,m-1)
	//This property allows us to form Pascals triangle
	//The solution is therefore just 40 choose 20
	return nChooser(40,20);
}
