int solutionTwo()
{
	int total = 0;
	int fibonacciOne = 1, fibonacciTwo = 2;

	while (fibonacciTwo < 4000000)
	{
		if (fibonacciTwo % 2 == 0)
		{
			total += fibonacciTwo;
		}

		fibonacciOne = fibonacciTwo + fibonacciOne;
		fibonacciTwo = fibonacciTwo + fibonacciOne;
		fibonacciOne = fibonacciTwo - fibonacciOne;
		fibonacciTwo = fibonacciTwo - fibonacciOne;
	}

	return total;
}
