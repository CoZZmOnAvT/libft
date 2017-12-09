/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 18:43:00 by pgritsen          #+#    #+#             */
/*   Updated: 2017/12/09 18:58:15 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putenbr_l(double num, int ap)
{
	long	power;

	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num != num)
		return (ft_putstr("nan"));
	else if (num == INFINITY)
		return (ft_putstr("inf"));
	power = 0;
	while (num >= 10 && ++power)
		num /= 10;
	ft_putfnbr(num, ap);
	ft_putstr("e+0");
	ft_putlnbr(power);
}

void	ft_putenbr_u(double num, int ap)
{
	long	power;

	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num != num)
		return (ft_putstr("nan"));
	else if (num == INFINITY)
		return (ft_putstr("inf"));
	power = 0;
	while (num >= 10 && ++power)
		num /= 10;
	ft_putfnbr(num, ap);
	ft_putstr("E+0");
	ft_putlnbr(power);
}
