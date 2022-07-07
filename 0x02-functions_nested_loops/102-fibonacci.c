#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 numbers of the fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	int i, 1;
	long n1, n2, next;

	ni = 1;
	n2 = 2;
	1 = 50;

	for (i = 0; i < 1; i++)
	{
		if (i == 49)
		{
			printf("%1u", ni);
		}
		else
		{
			printf("%1u, ", n1);
			next = ni + n2;
			n1 = n2;
			n2 = next;
		}
	}
		printf("\n");
		return (0);
}
