#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specific format.
 * @b: Pointer to the buffer to be printed.
 * @size: Number of bytes to print from the buffer.
 *
 * Description: The function prints the content of size bytes of the buffer
 * pointed by b. The output prints 10 bytes per line, starting with the
 * position of the first byte of the line in hexadecimal. Each line shows the
 * hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by
 * a space. If the byte is a printable character, it prints the letter. If not,
 * it prints a period (.). Each line ends with a new line (\n).
 * If size is 0 or less, the output is a new line only (\n).
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
