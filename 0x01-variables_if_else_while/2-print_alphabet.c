#include <stdio.h>
/**
 * main -  To print alphabets with just putchar function
 * Return: 0
 */
int main(void)
{
	char beta[26] = "abcdefghijklmnopqrstuvwxyz";

		for (i = 0; i < 26; i++)
		{
			putchar(beta[i]);
			putchar('\n');
		}

			return (0);
}
