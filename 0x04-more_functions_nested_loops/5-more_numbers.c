
#include "main.h"
/**
 * _isdigit - Check if a character is a digit
 * @a: The number to be checked
 * Return: 1 for a character that is a digit, 0 for any else
 */

void more_numbers(void)
{

        int x, y;
        for (x = 0; x < 10; x++)
        {
        for (y = 0; y <= 14; y++)
        {
        if (y > 9)
        {
        _putchar((y / 10) + '0');
        }
	_putchar((y % 10) + '0');
        }
        _putchar('\n');
        }



}
~                                                                                                                                                                                                            
~             
