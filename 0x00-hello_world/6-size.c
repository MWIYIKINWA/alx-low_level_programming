#include <stdio.h>
/**
 * main - my main function
 * Return: 0 on success
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
