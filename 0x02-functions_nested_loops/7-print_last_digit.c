#include "main.h"
/**
 * print_last_digit - function that prints last digit
 *
 * @i: funtion parameter
 *
 * Return: a
 */

int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (i < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}


