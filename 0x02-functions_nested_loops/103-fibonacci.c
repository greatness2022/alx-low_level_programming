#include <stdio.h>

/**
 * main - prints the sum of the even Fibonacci numbers less than 4000000
 * Return: Nothing!
 */

int main(void)
{
	int first = 1, second = 2, next, sum = 0;


	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}

		next = first + second;
		first = second;
		second = next;
	}

	printf("%d\n", sum);
	return (0);
}
