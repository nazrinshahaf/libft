/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_calloc.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: nfernand <nfernand@42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2021/05/19 16:15:22 by nfernand		   #+#	  #+#			  */
/*	 Updated: 2021/05/19 16:15:22 by nfernand		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	*res;
	size_t			i;

	res = malloc(size * count);
	if (!res)
		return (NULL);
	i = 0;
	while (i < count)
	{
		res[i] = 0;
		i++;
	}
	return ((void *)res);
}
