/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:53:00 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:27:35 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *mem;

	mem = (unsigned char *)b;
	while (len)
	{
		*mem = (unsigned char)c;
		mem++;
		len--;
	}
	return (b);
}
