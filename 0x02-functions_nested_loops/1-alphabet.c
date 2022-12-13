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
}
/**
 * main - use print_alphabet() function
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}


