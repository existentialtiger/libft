/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:32:01 by edehmlow          #+#    #+#             */
/*   Updated: 2018/08/02 22:09:45 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

void	ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
}
