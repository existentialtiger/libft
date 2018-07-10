#include "../../incls/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	
	i = 0;
	while(i < len)
	{
		while (src)
		{
			dst[i] = src [i];
			i++;
		}
	}
	if (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dst);
}
