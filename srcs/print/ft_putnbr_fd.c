#include "../../incls/libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int isneg;
	
	if (n < 0)
		isneg = -1;
	if (n == n % 10)
	{
		if (isneg == -1)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' + n * isneg, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + (n % 10) * isneg, fd);
	}
}
