#include <unistd.h>

int ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}
