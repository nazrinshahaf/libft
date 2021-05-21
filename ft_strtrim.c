/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:15:28 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/21 12:54:44 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isinstr(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	begin;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	begin = 0;
	i = 0;
	while (s1[begin] && ft_isinstr(s1[begin], set))
		begin++;
	while (end > begin && ft_isinstr(s1[end - 1], set))
		end--;
	res = malloc(sizeof(char) * (end - begin) + 1);
	if (!res)
		return (NULL);
	while (i < (end - begin))
	{
		res[i] = s1[begin + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
