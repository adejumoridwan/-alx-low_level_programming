/*
 * File - alphabet.c
 * Auth - Adejumo Ridwan Suleiman
 */
#include "main.h"
#include <stdio.h>


/**
 * print_alphabet - prints te letters of the alphabet in lowercase
 * 
 */
void print_alphaber(void);

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
/**
 * main - print_alphabets
 * Return: always 0
 */
int main(void)
{
	print_alphabet();
	
	return (0);
}

