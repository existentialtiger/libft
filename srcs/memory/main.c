#include "../../incls/libft.h"
#include <stdio.h>

int	main(void)
{
	void *cats;
	char *ptr;
	int i = 0;

	cats = malloc(sizeof(char) * 5);
	cats = ft_memset(cats, 2, 5);
	while(i < 5)
	{
		printf("%i", ptr[i]);
		i++;
	}
	//printf("%i", (int)memset(cats, 4, 5));
}
