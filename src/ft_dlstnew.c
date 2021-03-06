/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 20:00:28 by pgritsen          #+#    #+#             */
/*   Updated: 2018/05/19 16:21:49 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist		*ft_dlstnew(void const *content, size_t content_size)
{
	t_dlist *new;

	if (!(new = ft_memalloc(sizeof(t_dlist))))
		return (NULL);
	new->prev = new;
	new->next = new;
	new->index = -1;
	if (content_size && !(new->content = ft_memalloc(content_size)))
	{
		ft_memdel((void **)&new);
		return (NULL);
	}
	new->content = content ? ft_memcpy(new->content, content, content_size) : 0;
	new->content_size = content ? content_size : 0;
	return (new);
}
