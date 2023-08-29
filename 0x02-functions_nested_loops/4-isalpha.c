#include "main.h"

/**
 *_isalpha - check main.h
 *@c: function parameter
 *Return: Program to return a 1 if sucessful else a 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
