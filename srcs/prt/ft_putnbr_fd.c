/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:52:28 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:28:45 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int isneg;

	isneg = 1;
	if (n < 0)
		isneg = -1;
	if (n == n % 10)
	{
		if (isneg == -1)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' + (n % 10) * isneg, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + (n % 10) * isneg, fd);
	}
}
