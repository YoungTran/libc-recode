/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 02:32:50 by ytran             #+#    #+#             */
/*   Updated: 2018/04/24 18:20:35 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*cd;
	const unsigned char	*cs;
	size_t				i;

	cd = dst;
	cs = src;
	if (dst < src)
	{
		i = 0;
		while (i < n)
		{
			cd[i] = cs[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (n--)
			cd[n] = cs[n];
	}
	return (dst);
}
