#include <stdio.h>
/**
 * main - To print numbers in base 16 in lower case
 * Return: 0
 */
int main(void)
{
	char vera[10] = "0123456789";
	char ken[10] = "abcdef";
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		putchar(vera[j]);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(ken[i]);
	}
	putchar('\n');
	return (0);
}
