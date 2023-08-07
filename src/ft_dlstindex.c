/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 20:53:36 by pgritsen          #+#    #+#             */
/*   Updated: 2018/01/09 17:51:26 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstindex(t_dlist *dlst, ssize_t index)
{
	t_dlist	*ret;

	ret = dlst;
	while (ret && (ret = ret->next) != dlst && index--)
		;
	return (index && ret != dlst ? ret : 0);
}
