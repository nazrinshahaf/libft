/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_substr.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: nfernand <nfernand@42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2021/05/19 16:15:28 by nfernand		   #+#	  #+#			  */
/*	 Updated: 2021/05/19 16:15:28 by nfernand		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	copy_len;
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	i = 0;
	copy_len = ft_strlen(s + start);
	if (copy_len < len)
		len = copy_len;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	while (s[i + start] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
