#include "../../incls/libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	char *mem;

	while (len)
	{
		*mem = (unsigned char)c;
		mem++;
		len--;
	}
	return (b);
}
