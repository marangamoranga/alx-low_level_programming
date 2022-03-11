#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (b = 48; b < 58; b++)
	{
		for (a = 49; a < 58; a++)
		{
			for (c = 50; c < 58; c++)
			{
				if (c > a && a > b)
				{
					putchar(b);
					putchar(a);
					putchar(c);
					if (b != 55 || a != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
