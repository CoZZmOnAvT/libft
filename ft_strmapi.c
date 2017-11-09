/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 19:32:10 by pgritsen          #+#    #+#             */
/*   Updated: 2017/11/09 18:52:26 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*new;
	int			s_l;
	long long	it;

	if (!s)
		return (NULL);
	else if (!f)
		return ((char *)s);
	s_l = ft_strlen(s);
	if (!(new = (char*)malloc((s_l + 1) * sizeof(char))))
		return (NULL);
	it = -1;
	while (s[++it])
		new[it] = f(it, s[it]);
	new[it] = 0;
	return (new);
}
