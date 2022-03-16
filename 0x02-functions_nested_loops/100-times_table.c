#include "main.h"
/**
 * prints_times_table - prints time table
 * @n : times table to use
 * Return:void
 */
void prints_times_table(int n)
{
	int i = 0, rep, b;

	if (n < 0 || n > 15)
		return;
	while (i <= n)
	{
		for (b = 0; b <= n; ++b)
		{
			rep = i * b;
			if (b == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		++i;
	}
}
