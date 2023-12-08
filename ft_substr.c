/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:24 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/07 17:06:42 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	char	*ss;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	p = malloc((len + 1));
	ss = (char *)s;
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = ss[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
