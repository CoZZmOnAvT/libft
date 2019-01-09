/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgritsen <pgritsen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 16:19:14 by pgritsen          #+#    #+#             */
/*   Updated: 2017/12/10 14:58:08 by pgritsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
    int ret;

    if (!s)
        return ;
    ft_putstr_fd(s, fd);
    ret = write(fd, "\n", 1);
    FT_IGNORE(ret);
}
