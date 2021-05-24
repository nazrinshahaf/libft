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
	void	*res;

	res = malloc(size * count);
	if (!res)
		return (NULL);
	ft_memset(res, 0, count * size);
	return ((void *)res);
}
