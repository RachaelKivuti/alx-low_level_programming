#include <stdio.h>

/**
 *main - prints all possible combinations of single-digit  numbers
 *numbers should be in ascending order, using putchar only
 *Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	for (r = 48; r < 58; r++)
	{
		putchar(r);
		if (r != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
