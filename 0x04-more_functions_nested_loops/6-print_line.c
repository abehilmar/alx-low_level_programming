#include "main.h"
/**
 *print_line - function
 *@n: length of line
 */
void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
			
