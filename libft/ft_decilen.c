/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decilen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 14:03:39 by anel-bou          #+#    #+#             */
/*   Updated: 2019/04/04 17:37:54 by anel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_decilen(int nb)
{
	int				i;
	unsigned int	n;

	i = (nb < 0 ? 2 : 1);
	n = (nb < 0 ? -nb : nb);
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}
