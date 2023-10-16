#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The input string
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	for (length -= 1; length >= 0; length--)
	{
		putchar(s[length]);
	}

	putchar('\n');
}
