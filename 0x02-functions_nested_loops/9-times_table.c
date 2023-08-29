#include "main.h"

/**
 *times_table - function to print muliplication table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j == 0)
			{
				_putchar('0');
			}
			else
			{
				int num = i * j;
				int digits[10];
				int count = 0;
				int k;

				while (num > 0)
				{
					digits[count] = num % 10;
					num /= 10;
					count++;
				}
				for (k = count - 1; k >= 0; k--)
				{
					_putchar(digits[k] + '0');
				}
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
