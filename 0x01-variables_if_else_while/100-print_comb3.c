#include <stdio.h>
/**
* main - print numbers from 00 to 99. (* * Return: 0 on success
*/
int main(void)
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}
