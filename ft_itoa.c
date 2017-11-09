/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 22:18:12 by pgritsen          #+#    #+#             */
/*   Updated: 2017/11/09 18:50:50 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_itoa(int n)
{
	char		*num;
	int			sign;
	int			it;
	long int	n_l;

	sign = 0;
	if (n < 0)
		sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if ((num = (char *)malloc(INT_MAX_LEN + sign + 1)) == NULL)
		return (NULL);
	it = 0;
	if (sign)
		num[it++] = '-';
	n_l = n;
	while (n_l)
	{
		num[it++] = ABS(n_l % 10) + '0';
		n_l /= 10;
	}
	num[it] = 0;
	num = ft_strrev(num + sign);
	return (num -= sign);
}
