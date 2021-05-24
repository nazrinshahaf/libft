/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:29:27 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/24 16:43:32 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <string.h>

char	*ft_strndup(const char *s, size_t n)
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * n + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < n)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
