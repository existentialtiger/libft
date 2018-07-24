/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 22:06:54 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/17 15:21:15 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strwrdcnt(char const *s, char delim)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == delim && s[i])
			i++;
		if (s[i])
			cnt++;
		while (s[i] != delim && s[i])
			i++;
	}
	return (cnt);
}

static int	ft_wrdlen(char const *s, char delim, int loc)
{
	int		len;

	len = 0;
	while (s[loc] != delim && s[loc])
	{
		len++;
		loc++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		wrd;
	char	**wrds;

	i = 0;
	wrd = 0;
	if (!s || !(wrds = (char **)ft_memalloc(sizeof(char *) *
					(ft_strwrdcnt(s, c) + 1))))
		return (NULL);
	while (s[i] && wrd < ft_strwrdcnt(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		j = 0;
		wrds[wrd] = (char *)ft_memalloc(sizeof(char) *
				(ft_wrdlen(s, c, i) + 1));
		if (wrds[wrd])
		{
			while (s[i] != c && s[i])
				wrds[wrd][j++] = s[i++];
		}
		wrd++;
	}
	return (wrds);
}
