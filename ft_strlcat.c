/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:15:27 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/21 12:54:43 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize < len_dst || dstsize < 1)
		return (len_src + dstsize);
	while (i + len_dst < dstsize - 1 && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_dst + len_src);
}
