#include "GenericFunctions.h"
using namespace std;

bool prime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i <= n / 2; i++)
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

bool* findPrimes(bool* b, int size)
{
	int limit = sqrt(size);

	for (int i = 0; i != size; i++)
	{
		b[i] = true;
	}

	b[0] = false;
	b[1] = false;

	for (int i = 2; i != limit; i++)
	{
		for (int j = i; j * i < size; j++)
		{
			b[j*i] = false;
		}
	}

	return b;
}