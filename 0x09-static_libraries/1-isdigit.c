#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The checker to be checked
 * Return: 1 for digit character or 0 for anything
 */
int _isdigit(int c)
	{
		if (c >= 48 && c <= 57)
			return (1);
		else
			return (0);
	}
