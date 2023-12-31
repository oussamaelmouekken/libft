/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:48:23 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/19 18:24:16 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	t;

	t = 0;
	while (lst != NULL)
	{
		t++;
		lst = lst->next;
	}
	return (t);
}
