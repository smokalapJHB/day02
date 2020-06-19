#include <unistd.h>

char ft_putchar(char num)
{
	return write(1,&num,sizeof(num));
	
}

void ft_print_numbers(void)
{
	char num; 
	num	= '0';
	while (num <= '9')
	{
		ft_putchar(num);
		++num;
	}
}
