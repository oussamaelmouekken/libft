/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-moue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:19:57 by oel-moue          #+#    #+#             */
/*   Updated: 2023/11/16 16:18:42 by oel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (j);
	while (src[i] && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

// int	main(void)
// {
// 	char	src[] = "1234545454";
// 	char	dest[] = "k";
// 	char	src1[] = "123";
// 	char	dest1[] = "k";

// 	printf("%zu\n", ft_strlcpy(dest, src, 3));
// 	printf("%s\n", dest);
// 	printf("%zu\n", strlcpy(NULL, src1, 2));
// 	printf("%s", dest1);
// }
