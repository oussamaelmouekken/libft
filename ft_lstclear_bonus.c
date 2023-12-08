/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:58:39 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/21 16:00:04 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	l = *lst;
	if (lst && del)
	{
		while (l != NULL)
		{
			ft_lstdelone(l, del);
			l = l->next;
		}
		*lst = NULL;
	}
}
