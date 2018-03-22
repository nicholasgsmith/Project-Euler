#include "GenericFunctions.h"
using namespace std;

bool prime(int n)
{
	for (int i = 2; i < n / 2; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}

	return true;
}

bool palindrome(int n)
{
	stringstream stream;
	stream << n;
	string textVersion = stream.str();

	for (int i = 0; i < (textVersion.size() / 2); i++) {
		if (textVersion[i] != textVersion[textVersion.size() - i - 1]) {
			return false;
		}
	}

	return true;
}
