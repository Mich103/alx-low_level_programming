#include "main.h"
/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: the binary number as a string
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int str_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
decimal += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (decimal);
}

/**
 * check_valid_string - function that checks if a string has only 0's and 1's
 * @b: string to be checked
 * Return: 1 or 0
 */
int check_valid_string(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
