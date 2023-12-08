/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:24:49 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/01 12:53:45 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (s + i);
		i--;
	}
	return (0);
}

// int	main(void)
// {

// //   printf("%s\n", strrchr(str,'m'));
//     printf("%s\n",ft_strrchr(str1, 's'));
// }
