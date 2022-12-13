#include "main.h"
/**
 * _islower - check if a number is lowercase
 * @c: the integer value it receives
 * Return: Always 0
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
