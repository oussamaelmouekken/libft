/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:51:13 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/16 14:41:41 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countnb(int n)
{
	int	nb;
	int	c;

	nb = n;
	c = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		c++;
	}
	return (c);
}

int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long	m;
	int		count;
	char	*r;

	m = n;
	count = countnb(m);
	if (is_negative(m) == 1)
	{
		m = -m;
		count++;
	}
	r = malloc(count + 1);
	if (!r)
		return (NULL);
	r[count--] = '\0';
	if (m == 0)
		r[0] = '0';
	if (is_negative(n) == 1)
		r[0] = '-';
	while (m > 0)
	{
		r[count--] = m % 10 + '0';
		m = m / 10;
	}
	return (r);
}
