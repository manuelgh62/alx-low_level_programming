#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: Character to be checked
 * Return: 1 for uppercase character or 0 for anything
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
