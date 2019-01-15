/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 20:53:36 by pgritsen          #+#    #+#             */
/*   Updated: 2018/01/09 17:51:26 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_dlist	*partition(t_dlist *begin, t_dlist *end,
							int (*cmp)(void *, void *))
{
	t_dlist	*pivot;
	t_dlist	*it;
	t_dlist	*j;

	pivot = end;
	it = begin;
	j = begin->prev;
	while ((j = j->next)->index < end->index)
		if (cmp(j->content, pivot->content) < 0)
		{
			if (it->index != j->index)
				ft_dlstswap_content(it, j);
			it = it->next;
		}
	if (it->index != end->index)
		ft_dlstswap_content(it, pivot);
	return (it);
}

void			ft_dlstsort(t_dlist *begin, t_dlist *end,
							int (*cmp)(void *, void *))
{
	t_dlist	*p;

	if (begin->index < end->index)
	{
		p = partition(begin, end, cmp);
		if (p->index != -1 && p->prev->index != -1)
			ft_dlstsort(begin, p->prev, cmp);
		if (p->index != -1 && p->next->index != -1)
			ft_dlstsort(p->next, end, cmp);
	}
}
