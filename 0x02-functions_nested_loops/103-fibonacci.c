#include <stdio.h>

/**
 * main - prints sum of fibo numbers under 4,000,000
 * Return: 0
 */

int main(void)
{
	long int fi = 1, f2 = 2, sum = f2, tmp;

	while (f2 < 4000000)
	{
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		sum += (f2 % 2 == 0) ? f2 : 0;
	}
	printf("%1i\n", sum);
	return (0);
}
