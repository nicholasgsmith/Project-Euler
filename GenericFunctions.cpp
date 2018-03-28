#include "GenericFunctions.h"
using namespace std;

//Calculates whether a number, n,  is prime
bool prime(int n)
{
	//If n is less then or equal to 1 it is not tprime
	if (n <= 1)
	{
		return false;
	}

	//When looking for factors to check up to the square root of the number
	int limit = sqrt(n);

	//Go up to the square root of n and see if any integers divide it evenly, if so it is not prime
	for (int i = 2; i <= limit; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}

	return true;
}

//Calculates whether a number, n, is a palindrome
bool palindrome(int n)
{
	//We convert n to a string
	stringstream stream;
	stream << n;
	string textVersion = stream.str();

	//We go through the string and compare each character to its partner on the other side
	//If any dont match it is not a palindrome
	for (int i = 0; i < (textVersion.size() / 2); i++) {
		if (textVersion[i] != textVersion[textVersion.size() - i - 1]) {
			return false;
		}
	}

	return true;
}

//Find all the primes up to a (exclusive) limit, size
//b[i] is set to false if i is not prim, and true if i is
bool* findPrimes(bool* b, int size)
{
	//When looking for factors to check up to the square root of the number
	int limit = sqrt(size);

	//To begin all numbers are considered prime
	for (int i = 0; i != size; i++)
	{
		b[i] = true;
	}

	//0 and 1 are not prime
	b[0] = false;
	b[1] = false;

	//Go through each integer up to the limit, set all its multiples to not be prime
	for (int i = 2; i != limit; i++)
	{
		//This if statement is for efficentcy, if b[i] is false then some previous integer, a, divides i
		//Since a then divides all of i's multiples as well there is no pointer checking them, as a will have already dismissed them
		if (b[i])
		{
			for (int j = i; j * i < size; j++)
			{
				b[j*i] = false;
			}
		}
	}

	return b;
}

//Calculates the number of factors of a number, n
int numberOfFactors(long long n)
{
	//When looking for factors to check up to the square root of the number
	int limit = sqrt(n);
	int factors = 0;

	//Go up to the square root of n and see if any integers divide it evenly
	for (int i = 1; i < limit; i++)
	{
		if (n%i == 0)
		{
			//We add 2 to the factors as each factor, r, where r < sqrt(n) has a partner factors, s, where s > sqrt(n), and hence wont be found by the loop
			factors += 2;
		}
	}

	//Checks if the sqrt of n is also a factor of it, cant check before as it would be included twice
	if (n%limit == 0)
	{
		factors++;
	}

	return factors;
}

//Calculates C(n,r) (Pascals triangle)
long long nChooser(int n, int r)
{
	//C(n,r) = (n+1-c)/c for c = 1 to c = r
	long long result = 1;
	for (int i = 1; i <= r; i++)
	{
		result = result * (n + 1 - i) / i;
	}
	return result;
}

//Converts a string to an int
int toInt(string t)
{
	int number;
	stringstream stream;
	stream << t;
	stream >> number;
	stream.clear();
	return number;
}

//Calculates the factorial of a given integer
long long fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}

	long long sum = 1;

	for (int i = 2; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}

//Returns the larger of 2 integers
int max(int n, int m)
{
	if (n > m)
	{
		return n;
	}
	return m;
}

//To sum the digits of a number n
int sumDigits(long long n)
{
	int digits = 0;
	while (n != 0)
	{
		digits += n % 10;
		n /= 10;
	}
	return digits;
}
