#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number for which times table needs to be printed
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				printf("%d", result);
			else
				printf(", %d", result < 100 ? result < 10 ? result : result / 10 : result % 100);
		}
		printf("\n");
	}
}
