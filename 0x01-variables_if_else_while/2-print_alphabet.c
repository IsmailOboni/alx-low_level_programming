#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char u;

	for (u = 'a'; u <= 'z'; u++)
		putchar(u);

	putchar('\n');

	return (0);
}
