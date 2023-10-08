#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens, ones;

	for (tens = 0; tens < 9; tens++)
	{
		for (ones = tens + 1; ones < 10; ones++)
		{
			putchar((char)(tens + '0'));
			putchar((char)(ones + '0'));

			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
