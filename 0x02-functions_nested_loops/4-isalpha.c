#include "main.h"

/**
 * _isalpha - function to check id c is a letter,lowercase or upercase
 * @c: is tge int that will use for the argument of thr function
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
		return (0);
}

