/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 03:24:30 by ytran             #+#    #+#             */
/*   Updated: 2018/04/23 03:28:48 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char		*cs;
	unsigned char	*cd;
	unsigned char	cc;
	size_t			i;

	i = 0;
	cc = (unsigned char)c;
	cs = src;
	cd = dst;
	while (i < n)
	{
		cd[i] = cs[i];
		if (cd[i] == cc)
			return (&cd[i + 1]);
		i++;
	}
	return (NULL);
}
