#include <stdio.h>
/**
 *main - the entry point of the program
 *Return: if successful return 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int %lu byte(s)", sizeof(long long int));
	return (0);
}