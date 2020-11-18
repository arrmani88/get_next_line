/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 11:03:58 by anel-bou          #+#    #+#             */
/*   Updated: 2019/04/04 16:51:39 by anel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;

	if (!s || !(r = ft_stralloc((char *)s)))
		return (NULL);
	i = -1;
	while (s[++i])
		r[i] = f(i, s[i]);
	r[i] = '\0';
	return (r);
}
