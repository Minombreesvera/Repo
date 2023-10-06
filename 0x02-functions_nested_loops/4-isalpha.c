#include "main.h"
/**
 * isalpha - a fnction that checks for alphabet character
 * @c:an integer
 * Return: 0
 */
int _isalpha(int c)
{
	if (('c' > 'a' && 'c' < 'z') || ('C' > 'A' && 'C' < 'Z'))
		return (1);
	else
		return (0);
}
