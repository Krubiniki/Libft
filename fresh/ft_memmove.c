/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:15:29 by mkrubini          #+#    #+#             */
/*   Updated: 2020/02/03 20:36:13 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = dst;
	ps = src;
	i = len;
	if (pd > ps)
	{
		while (i > 0)
		{
			pd[i - 1] = ps[i - 1];
			i--;
		}
	}
	while (len--)
	{
		*pd++ = *ps++;
	}
	return (dst);
}