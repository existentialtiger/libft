/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:46:02 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:38:13 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	new = (char*)ft_memalloc(sizeof(char) * (size + 1));
	if (new)
		return (new);
	return (NULL);
}
