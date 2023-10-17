#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[100];
	int i, sum, diff;

	srand(time(0));

	for (i = 0, sum = 0, diff = 2772; diff > 122; i++)
	{
		password[i] = rand() % 10 + 48;
		sum += password[i];
		diff -= sum;
	}

	password[i] = diff;

	for (i = 0; password[i] != '\0'; i++)
	{
		printf("%c", password[i]);
	}

	return (0);
}
