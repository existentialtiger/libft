#include "../../incls/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*rtn;
	
	ptr = s;
	while (ptr)
	{
		if (ptr == (char)c)
			rtn = ptr;
		ptr++;
	}
	if ((char)c == '\0')
		return (ptr);
	return (rtn);
}
