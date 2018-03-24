#include "GenericFunctions.h"
using namespace std;

bool prime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	int limit = sqrt(n);

	for (int i = 2; i <= limit; i++)
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

int numberOfFactors(long long n)
{
	int limit = sqrt(n);
	int factors = 0;

	for (int i = 1; i < limit; i++)
	{
		if (n%i == 0)
		{
			factors += 2;
		}
	}

	if (n%limit == 0)
	{
		factors++;
	}

	return factors;
}
