/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:02:11 by oel-moue          #+#    #+#             */
/*   Updated: 2023/10/31 23:36:19 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	c;

	if (dest == NULL && src && dstsize == 0)
		return (0);
	c = ft_strlen(src);
	k = ft_strlen(dest);
	if (dstsize == 0 || dstsize < k || !dest)
		return (c + dstsize);
	i = k;
	j = 0;
	while (src[j] && i < (dstsize - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (k + c);
}
