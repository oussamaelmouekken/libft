/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:27:40 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/14 14:27:44 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	s = count * size;
	ptr = malloc(s);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, s);
	return (ptr);
}
