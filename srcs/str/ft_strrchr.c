/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:18:18 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/17 15:30:37 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	len = (int)ft_strlen(s);
	ptr = (char *)s;
	if (!s)
		return (NULL);
	while (len >= 0)
	{
		if (ptr[len] == c)
			return ((char *)ptr + len);
		len--;
	}
	return (NULL);
}
