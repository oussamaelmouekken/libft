/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:42:37 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/14 16:12:24 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int				i;
	char			*d;
	unsigned char	*s;
	size_t			j;

	j = ft_strlen(src);
	s = (unsigned char *)src;
	i = 0;
	d = malloc(j + 1);
	if (!d)
		return (0);
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
