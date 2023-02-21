#include "main.h"
/**
 * times_table - prints the 9 multiplication table
 * Return: an empty output
 */
void times_table(void)

{
	int u, v, x, y, z;

	for  (u = 0; u <= 9; u++)
	{
		for (v = 0; v <= 9; v++)
		{
			x = u * v;
			if (x > 9)
			{
				y = x % 10;
				z = x - y / 10;
				_putchar(44);
				_putchar(32);
				_putchar(z + '0');
				_putchar(y + '0');
			}
			else
			{
				if (v != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
