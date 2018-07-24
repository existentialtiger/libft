/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:26:56 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:21:42 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *temp;

	temp = *alst;
	if (alst && new)
		new->next = temp;
	*alst = new;
}
