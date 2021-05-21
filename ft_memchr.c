/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:15:26 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/21 12:54:42 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c2;

	str = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (n-- > 0)
	{
		if (*str == c2)
			return (str);
		str++;
	}
	return (NULL);
}
