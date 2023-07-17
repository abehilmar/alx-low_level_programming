#include <stdio.h>
/**
 *main - functin goes here
 *Description : print alpapets
 *Return: Always 0
 */
int main(void)
{
	int init = 97;

	while (init <= 122)
	{
		putchar (init);
		putchar ('\n');
		init++;
	}
	return (0);
}
