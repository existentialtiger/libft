/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_for_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 19:54:18 by edehmlow          #+#    #+#             */
/*   Updated: 2018/08/02 19:57:24 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

int	chk_for_char(char *str, char c)
{
	int i;

	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}
