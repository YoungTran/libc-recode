/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 02:54:55 by ytran             #+#    #+#             */
/*   Updated: 2018/04/24 04:57:39 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strpartition(char const *s, int slen, long index)
{
	char	*str;

	str = ft_strnew(slen);
	if (str == NULL)
		return (NULL);
	str[slen--] = '\0';
	while (slen >= 0)
		str[slen--] = s[index--];
	return (str);
}

static char	**ft_ssparsetoarr(char const *s, char **a, int alen, char c)
{
	int		ai;
	int		slen;
	long	i;

	i = 0;
	ai = 0;
	while (ai < alen)
	{
		slen = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			slen++;
		}
		if (s[i] == '\0' || s[i] == c)
			a[ai++] = ft_strpartition(s, slen, i - 1);
	}
	a[ai] = NULL;
	return (a);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**a;
	int		alen;

	if (s == NULL)
		return (NULL);
	alen = ft_wordcount(s, c);
	if (!(a = (char **)malloc(sizeof(char *) * alen + 1)))
		return (NULL);
	return (ft_ssparsetoarr(s, a, alen, c));
}
