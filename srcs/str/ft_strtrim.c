/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 21:40:16 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:39:05 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

static int	ft_strisspace(char const *s)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == len)
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char		*final;
	int			i;
	int			j;
	size_t		k;

	i = 0;
	if (!s || ft_strisspace(s))
		return (ft_strdup(""));
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	k = 0;
	final = ft_strnew(j - i + 1);
	if (final)
	{
		while (i <= j)
		{
			final[k] = s[i];
			i++;
			k++;
		}
	}
	return (final);
}
