/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 00:54:26 by edehmlow          #+#    #+#             */
/*   Updated: 2018/07/23 18:23:36 by edehmlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inclds/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list*)ft_memalloc(sizeof(t_list));
	if (new)
	{
		if (content == 0)
		{
			new->content = NULL;
			new->content_size = 0;
		}
		else
		{
			new->content = ft_memalloc(sizeof(content_size));
			if (!new->content)
				return (NULL);
			new->content = ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		new->next = NULL;
	}
	return (new);
}
