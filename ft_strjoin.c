/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 19:59:27 by pgritsen          #+#    #+#             */
/*   Updated: 2017/11/09 18:52:14 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	s1_l;
	size_t	s2_l;

	if (!s2 && s1)
		return ((char *)s1);
	else if (!s1 && s2)
		return ((char *)s2);
	else if (!s1 && !s2)
		return (NULL);
	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	if (!(new = (char *)malloc((s1_l + s2_l + 1) * sizeof(char))))
		return (NULL);
	*new = 0;
	ft_strlcat(new, s1, s1_l + s2_l + 1);
	ft_strlcat(new, s2, s1_l + s2_l + 1);
	return (new);
}
