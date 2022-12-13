/*
 * File - alphabet.c
 * Auth - Adejumo Ridwan Suleiman
 */
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints te letters of the alphabet in lowercase
 * 
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
