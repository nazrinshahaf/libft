/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:15:27 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/21 12:54:43 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	length;
	size_t	i;

	length = ft_strlen(s1);
	res = malloc(sizeof(char) * length + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
