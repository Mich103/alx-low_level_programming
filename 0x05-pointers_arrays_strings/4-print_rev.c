#include "main.h"
/**
* print_rev - function that prints a string in reverse
* @s: string to print
* Return: 0
*/

void print_rev(char *s)
{
int len = 0, index = 0;
len = _strlen(s);

for (index = len - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');
}

/**
 *_strlen - function that returns the length of a string
 * @s: string
 *Return: length
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
