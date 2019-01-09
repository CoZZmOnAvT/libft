/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 16:01:34 by pgritsen          #+#    #+#             */
/*   Updated: 2017/12/10 14:58:05 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putendl(char const *s)
{
	int ret;

	if (!s)
		return ;
	ft_putstr(s);
	ret = write(1, "\n", 1);
	FT_IGNORE(ret);
}
