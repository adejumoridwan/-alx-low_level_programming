#include "main.h"
/**
 * _isalpha - check if a number is lowercase
 * @c: the integer value it receiveis
 * Return: 1 if true. 0 if false
 */
int _isalpha(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
