#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to the input string
 * Return: The converted integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (num > (2147483647 - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483648);
			}
		}

		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
