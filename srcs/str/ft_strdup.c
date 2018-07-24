/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:11:23 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:34:34 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	dup = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dup != 0)
		dup = ft_strcpy(dup, s1);
	return (dup);
}
