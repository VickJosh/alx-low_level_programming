#include "main.h"

/**
 *print_last_digit - the function prints the last digit of the number
 *@i: function parameter
 *Return: program to return a value of the last digit of the number
 */

int print_last_digit(int i)

{
	int k = i % 10;

		if (i < 0)
			k = -k;
	_putchar (k + '0');

	return (k);
}
