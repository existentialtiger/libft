#include "../../incls/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_isalpha('3'));
	printf("%i", ft_isdigit('a'));
	printf("%i", ft_isalnum('&'));
	//printf("%i", ft_isascii('¡'));
	//printf("%i", ft_isprint('¡'));
	printf("%i", ft_toupper('8'));
	printf("%i", ft_tolower('A'));
	printf("%i", ft_isspace('a'));
}
