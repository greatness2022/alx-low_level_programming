#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - Checks if a number is prime recursively.
 * @n: The number to check for primality.
 * @divisor: The divisor to check if n is divisible by.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}
