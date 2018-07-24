/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:53:37 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:20:35 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

static int	ft_numlen(long nb)
{
	int	cnt;

	cnt = 1;
	if (nb < 0)
	{
		cnt++;
		nb = nb * -1;
	}
	while (nb / 10 > 0)
	{
		nb = nb / 10;
		cnt++;
	}
	return (cnt);
}

char		*ft_itoa(int n)
{
	char	temp[ft_numlen(n) + 1];
	int		len;
	int		isneg;
	char	*new;
	long	nb;

	nb = (long)n;
	len = ft_numlen(nb) - 1;
	ft_bzero(temp, len + 2);
	isneg = 0;
	if (nb < 0)
	{
		temp[0] = '-';
		isneg = 1;
		nb = nb * -1;
	}
	while (len >= isneg)
	{
		temp[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	new = ft_strdup(temp);
	return (new);
}
