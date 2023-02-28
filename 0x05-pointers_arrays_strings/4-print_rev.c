#include "main.h"
/**
 * print_rev - prints and reversa
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int li = 0;
	int h;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	s--;
	for (h = li ; h > 0 ; h--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
