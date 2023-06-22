#include "main.h"
/**
 * _isdigit - Check if a character is a digit
 * @a: The number to be checked
 * Return: 1 for a character that is a digit, 0 for any else
 */

void print_most_numbers(void)
{
        int x =0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');


}
