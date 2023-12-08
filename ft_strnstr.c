/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:52:15 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/06 12:55:04 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *rechr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (rechr[0] == '\0')
		return ((char *)str);
	if (str == NULL && rechr && len == 0)
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == rechr[j] && rechr[j] != '\0' && (i + j) < len)
			j++;
		if (rechr[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
