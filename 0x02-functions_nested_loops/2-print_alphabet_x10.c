#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char v;
	int b;

	b = 1;
	while (b <= 10)
	{
		v = 'a';
		while (v <= 'z')
		{
			_putchar(v);
			v++;
		}
		_putchar('\n');
		b++;
	}
	return (0);
}


