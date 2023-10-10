#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute absolute value of
 *
 * Return: Absolute value of the input integer
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
