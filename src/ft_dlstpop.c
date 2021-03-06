/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstpop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 21:02:19 by pgritsen          #+#    #+#             */
/*   Updated: 2018/01/09 17:35:52 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstpop(t_dlist *dlst)
{
	t_dlist *del;

	if (!dlst)
		return ;
	del = dlst->next;
	ft_dlstdelelem(&del);
}
