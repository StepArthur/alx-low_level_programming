#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int o, p;

	for (o = 0; o <= 99; o++)
	{
	for (p = o = 1; p <= 99; p++)
	{

	putchar((o / 10) + '0');
	putchar((o % 10) + '0');
	putchar(' ');
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	if (o == 98 && p == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
