/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:28:04 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/20 19:28:12 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (*lst == NULL)
		*lst = new;
	t = *lst;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = new;
	new->next = NULL;
}
