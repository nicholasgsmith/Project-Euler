int solutionThree()
{
	long long number = 600851475143;
	int largest = 0;

	for (int i = 2; i < number / 2; i++)
	{
		if (prime(i))
		{
			while (number % i == 0)
			{
				number /= i;
			}

			if (i > largest)
			{
				largest = i;
			}
		}
	}

	if (number > largest)
	{
		largest = number;
	}

	return largest;
}
