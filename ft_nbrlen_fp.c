/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_fp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 18:49:00 by pgritsen          #+#    #+#             */
/*   Updated: 2017/12/09 18:57:34 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nbrelen(double num, int ap)
{
	long	power;

	if (num != num || num == INFINITY)
		return (3);
	power = 0;
	while (num >= 10 && ++power)
		num /= 10;
	return (ft_nbrflen(num, ap) + ft_nbrllen(power) + 3);
}
