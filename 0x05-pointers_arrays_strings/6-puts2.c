#include "main.h"
/**
 * puts2 - prints only one character out of to
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int li = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		li++;
	}
	t = li - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
