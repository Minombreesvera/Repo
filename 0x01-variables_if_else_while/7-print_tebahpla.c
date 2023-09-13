#include <stdio.h>
/**
 * main - printing the alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char vera[26] = "zyxwvutsrqponmlkjihgfedcba";
	int j;

	for (j = 0; j < 26; j++)
	{
		putchar(vera[j]);
	}
	putchar('\n');
	return (0);
}
