#include "main.h"
/**
 *print_last_digit - last digit
 *@i: value
 *Return: return
 */
int print_last_digit(int i)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
