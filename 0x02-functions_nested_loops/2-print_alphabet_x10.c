#include "main.h"
/**
 *print_alphabet_x10 - nested loop print alphabet
 *
 *Return: Always 0 (succes)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
