/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:57:23 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/22 11:54:52 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	**ft_malloc_error(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

void	ft_fill_str(char const *s, char c, char **res)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	i = ft_while_ischar(s, c);
	while (s[i])
	{
		if (s[i] != c)
		{
			count = 0;
			while (s[i] != c && s[i])
			{
				res[j][count] = s[i];
				i++;
				count++;
			}
			res[j][count] = '\0';
			j++;
			continue ;
		}
		i++;
	}
	res[j] = 0;
}

size_t	ft_alloc_str(char const *s, char c, char **res)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	i = ft_while_ischar(s, c);
	while (s[i])
	{
		count = 0;
		if (s[i] != c)
		{
			count = ft_while_isnotchar(s + i, c);
			i += count;
			res[j] = malloc(sizeof(char) * count + 1);
			if (!res[j])
				return (0);
			j++;
			continue ;
		}
		i++;
	}
	return (1);
}

size_t	ft_count_strs(char const *s, char c)
{
	size_t	i;
	size_t	strs_count;

	if (!s[0])
		return (0);
	i = 0;
	strs_count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			strs_count++;
			while (s[i] && s[i] != c)
				i++;
			continue ;
		}
		i++;
	}
	return (strs_count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	strs_count;
	size_t	error_check;

	if (!s)
		return (NULL);
	strs_count = ft_count_strs(s, c);
	res = malloc(sizeof(char *) * (strs_count + 1));
	if (!res)
		return (NULL);
	error_check = ft_alloc_str(s, c, res);
	if (error_check == 0)
		return (ft_malloc_error(res));
	ft_fill_str(s, c, res);
	return (res);
}
