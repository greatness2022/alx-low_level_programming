#include "main.h"

/**
 * calculate_sqrt - Helper function to calculate the square root for recursion
 * @n: Number for which square root is to be calculated
 * @guess: Current guess for the square root
 * Return: The natural square root of n, or -1 if n not have a natural square
 */

int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (calculate_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number for which square root is to be calculated
 *
 * Return: The natural square root of n, or -1 if n not have a natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		if (n < 0)
			return (-1);
	return (calculate_sqrt(n, 0));
}
