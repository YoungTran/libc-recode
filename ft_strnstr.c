/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 04:34:35 by ytran             #+#    #+#             */
/*   Updated: 2018/04/26 14:42:27 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	c;
	char	sc;
	size_t	llen;

	if ((c = *little++) != '\0')
	{
		llen = ft_strlen(little);
		while (1)
		{
			while (1)
			{
				if (len-- < 1 || (sc = *big++) == '\0')
					return (NULL);
				if (sc == c)
					break ;
			}
			if (llen > len)
				return (NULL);
			if (ft_strncmp(big, little, llen) == 0)
				break ;
		}
		big--;
	}
	return ((char *)big);
}
