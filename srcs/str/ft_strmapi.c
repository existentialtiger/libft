/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 19:11:11 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:36:25 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (new)
	{
		while (s[i])
		{
			new[i] = f(i, s[i]);
			i++;
		}
	}
	return (new);
}
