/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:11:24 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:38:55 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	sub = ft_strnew(len);
	if (sub)
	{
		while (s[start])
		{
			sub[i] = s[start];
			start++;
			i++;
		}
		sub[len] = '\0';
	}
	return (sub);
}
