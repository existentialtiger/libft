/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 21:53:10 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:37:16 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char *dup;

	dup = (char*)ft_memalloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (dup != 0)
		dup = ft_strncpy(dup, s1, len);
	return (dup);
}
