#include "main.h"
/**
*swap_int - function that swaps two integers
*@a: first integer
*@b: second integer
*Return: 0
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
