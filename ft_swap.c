/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 15:49:25 by pgritsen          #+#    #+#             */
/*   Updated: 2018/01/06 16:02:29 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_c(char *a, char *b)
{
	intmax_t	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

void	ft_swap_si(short int *a, short int *b)
{
	intmax_t	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

void	ft_swap_i(int *a, int *b)
{
	intmax_t	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

void	ft_swap_l(long *a, long *b)
{
	intmax_t	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

void	ft_swap_f(double *a, double *b)
{
	intmax_t	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}
