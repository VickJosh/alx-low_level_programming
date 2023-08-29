#include "main.h"
/**
 * _islower - Check main.h
 * @c: An input character
 *Description: function to check for lowercase letters
 * alphabet in lowercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c == 'z')
		return (1);
	else
		return (0);
}
