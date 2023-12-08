/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:55:34 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/02 16:00:42 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;
	unsigned char	val;
	size_t			i;

	d = (unsigned char *)b;
	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		d[i] = val;
		i++;
	}
	return (b);
}
