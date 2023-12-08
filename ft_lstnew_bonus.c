/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:54:14 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/19 14:28:37 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *new)
{
	t_list	*b;

	b = (t_list *)malloc(sizeof(t_list));
	if (!b)
		return (NULL);
	b->content = new;
	b->next = NULL;
	return (b);
}
