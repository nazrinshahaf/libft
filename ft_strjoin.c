/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:15:27 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/21 12:54:43 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_join(char const *s1, char *res)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len_s1;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len = len_s1 + ft_strlen(s2);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	ft_join(s1, res);
	ft_join(s2, res + len_s1);
	res[len] = '\0';
	return (res);
}
