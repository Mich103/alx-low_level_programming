#include "main.h"
/**
 * print_most_numbers - function that prints 0-9
 * Description: Prints the numbers except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(i);
	}
	_putchar('\n');
}
