#include <unistd.h>

void ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = '0';
	while(x <= '9')
	{
		y = x+1;
		while(y <= '9')
		{
			z = y+1;
			while(z <= '9')
			{
				print_char(x,y,z);
				if(x != '7' || y != '8' || z != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}			
				++z;
			}
			++y;
		}	
		++x;
	}
}
