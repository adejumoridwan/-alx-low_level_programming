/*
 * File - alphabet.c
 * Auth - Adejumo Ridwan Suleiman
 */
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function to print alphabets
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
