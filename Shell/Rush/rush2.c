#include <unistd.h>
#include <stdio.h>

#define CANTOA "AAAAAAAAAAAAAAAAAAAAAAAAAA"
#define CANTOC 'C'
#define ESPACO "BBBBBBBBBBBBBBBBBBBBBBBBBB"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	rush(int x, int y)
{
	int	d;
	int	k;
	
	d = x - 2;
	k = 3;
	if (x < 2)
	{
		d = 0;
	}
	if (x >= 3)
	{
		write (1, &CANTOA, 1);
		write (1, &ESPACO, d);
		write (1, &CANTOA, 1);
	}
	if (x <= 2)
	{
		write (1, &CANTOA, x);
	}
	if (y == 2 && x > 1)
	{
		write (1, "\n", 1);
		write (1, "B", 1);
		write (1, "     ", d);
		write (1, "B", 1);
	}
	if (y >= 3 && x >= 2)
	{
		while (k < y + 1)
		{
			write (1, "\n", 1);
			write (1, "B", 1);
			write (1, "                        ", d);
			write (1, "B", 1);
			k++;
		}
	}
	else
	{
		while (k < y + 1)
		{
			write (1, "\n", 1);
			write (1, "B", 1);
			k++;
		}
	}
	if (y > 1 && x > 1)
	{
		write (1, "\n", 1);
		ft_putchar (CANTOC);
		write (1, &ESPACO, d);
		ft_putchar (CANTOC);
	}
	if (y >= 2 && x == 1)
	{
		write (1, "\n", 1);
		ft_putchar (CANTOC);
	}
}

int	main (void)
{
	rush (1, 2);
}
