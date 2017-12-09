/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_fp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 18:49:00 by pgritsen          #+#    #+#             */
/*   Updated: 2017/12/09 19:43:31 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nbrfllen(long double num, long ap)
{
	long	decimalp;

	if (num != num || num == INFINITY)
		return (3);
	decimalp = (intmax_t)num;
	return (ft_nbrllen(decimalp) + ap + 1);
}

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

size_t		ft_nbrellen(long double num, long ap)
{
	long	power;

	if (num != num || num == INFINITY)
		return (3);
	power = 0;
	while (num >= 10 && ++power)
		num /= 10;
	return (ft_nbrfllen(num, ap) + ft_nbrllen(power) + 3);
}