int solution()
{
	int largest = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			if (i*j > largest)
			{
				if (palindrome(i*j))
				{
					largest = i*j;
				}
			}
		}
	}

	return largest;
}
