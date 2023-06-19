#include <stdio.h>
/**
 * main - Print lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)

{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	putchar(lowercase);
	putchar('\n');

	for (lowercase = 'A'; lowercase <= 'Z'; lowercase++)
	putchar(lowercase);
	putchar('\n');
	return (0);


}
