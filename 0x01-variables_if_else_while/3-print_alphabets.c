#include <stdio.h>
/**
 *main - functin goes here
 *Description : print alpapets
 *Return: Always 0
 */
int main(void)
{
	int small = 97;
	int alpa = 65;

	while (small <= 122)
	{
		putchar (small);
		small++;
	}
	while (alpa <= 90)
	{
		putchar (alpa);
		alpa++;
	}
	putchar ('\n');
	return (0);
}
