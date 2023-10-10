#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number and returns it.
 * @n: The input number.
 *
 * Return: The last digit of the input number.
 */

int print_last_digit(int n)
{
	int last_digit;


	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);

	return (last_digit);
}
