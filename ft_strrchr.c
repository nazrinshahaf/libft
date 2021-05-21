/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:15:28 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/21 12:54:44 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len != 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)(s + len));
		len--;
	}
	if (s[len] == (unsigned char)c)
		return ((char *)(s + len));
	return (NULL);
}
