/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:40:46 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:28:53 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

void	ft_putnbr(int n)
{
	int isneg;

	isneg = 1;
	if (n < 0)
		isneg = -1;
	if (n == n % 10)
	{
		if (isneg == -1)
			ft_putchar('-');
		ft_putchar('0' + n * isneg);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar('0' + (n % 10) * isneg);
	}
}
