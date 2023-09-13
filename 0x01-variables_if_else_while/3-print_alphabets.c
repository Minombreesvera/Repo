#include <stdio.h>
/**
 * main - To print both lowercase letters with uppercase letters
 * Return: 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	char beta[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	for (j =  0; j < 26; j++)
	{
		putchar(beta[j]);
	}
	putchar('\n');
	return (0);
}
