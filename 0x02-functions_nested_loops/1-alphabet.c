/*
 * File - alphabet.c
 * Auth - Adejumo Ridwan Suleiman
 */
#include <stdio.h>

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
/**
 * main - print alphabets
 * Return: always 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}

