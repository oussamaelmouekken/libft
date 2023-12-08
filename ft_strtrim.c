/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:34:58 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/16 14:48:40 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ckeck(char c, char const *set)
{
	int		i;
	char	*b;

	b = (char *)set;
	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;
	char	*p;

	if (!set)
		return ((char *)s);
	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && ckeck(s[i], set) == 1)
		i++;
	j = ft_strlen(s) - 1;
	while (j > i && ckeck(s[j], set) == 1)
		j--;
	p = ft_substr(s, i, j - i + 1);
	return (p);
}
// int	main(void)
// {
// 	char	d[] = "hello, world";

// 	printf("%s", ft_strtrim(d, NULL));
// }
