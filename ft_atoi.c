/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:22:28 by pgritsen          #+#    #+#             */
/*   Updated: 2017/11/02 16:12:55 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *s)
{
	long long int	result;
	int				sign;

	if (*s == 0)
		return (0);
	while (((*s > '\10' && *s <= '\16') || *s == '\40'))
		s++;
	sign = 1;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	result = 0;
	while (*s >= '0' && *s <= '9')
	{
		result = (result * 10) + (*s++ - '0');
		if ((result < 0 && sign != -1))
			return (-1);
		else if ((result < 0 && sign == -1))
			return (0);
	}
	result *= sign;
	return ((int)result);
}
