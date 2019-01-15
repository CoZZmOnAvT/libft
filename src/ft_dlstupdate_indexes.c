/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstupdate_indexes.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 20:58:45 by pgritsen          #+#    #+#             */
/*   Updated: 2018/01/08 21:03:27 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_dlstupdate_indexes(t_dlist *dlst)
{
	t_dlist	*tmp;
	size_t	i;

	if (!dlst)
		return ;
	i = 0;
	tmp = dlst;
	while ((tmp = tmp->next) != dlst)
		tmp->index = i++;
}
