/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:40:16 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:22:18 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *temp;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	new = temp;
	lst = lst->next;
	while (lst)
	{
		temp->next = f(lst);
		temp = temp->next;
		lst = lst->next;
	}
	temp->next = NULL;
	return (new);
}
