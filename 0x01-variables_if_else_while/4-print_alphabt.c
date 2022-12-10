/*
 * File: 2-print_alphabet.c
 * Author: Adejumo Ridwan Suleiman
 */
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
