/*
 * File - alphabet.c
 * Auth - Adejumo Ridwan Suleiman
 */
#include <stdio.h>
/**
 * print_alphabet - function to print alphabets
 */
void print_alphabet(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			putchar(c);
		putchar('\n');
	}
}
/**
 * main - use print_alphabet() function
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}


