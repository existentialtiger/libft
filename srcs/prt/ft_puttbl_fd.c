/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttbl_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:04:04 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:29:06 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

void	ft_puttbl_fd(char const **tbl, int fd)
{
	int i;

	i = 0;
	while (tbl[i])
	{
		ft_putstr_fd(tbl[i], fd);
		ft_putchar_fd('\n', fd);
		i++;
	}
}
