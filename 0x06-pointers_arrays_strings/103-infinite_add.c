#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result string, or 0 if the result cannot be stored.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int max_len = len1 > len2 ? len1 : len2;

	if (max_len >= size_r)
	{
		return (0);
	}

	r[max_len] = '\0';
	len1--;
	len2--;

	for (int i = max_len - 1; i >= 0; i--)
	{
		int digit1 = (len1 >= 0) ? n1[len1] - '0' : 0;
		int digit2 = (len2 >= 0) ? n2[len2] - '0' : 0;
		int sum = digit1 + digit2 + carry;
		
		carry = sum / 10;
		r[i] = (sum % 10) + '0';
		
		len1--;
		len2--;
	}

	if (carry > 0)
	{

		memmove(r + 1, r, max_len);
		r[0] = carry + '0';
	}

	return (r);
}
