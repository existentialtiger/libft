/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:08:46 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:25:10 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
