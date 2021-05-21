/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:15:23 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/21 12:54:41 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_countnum(int n)
{
	int			length;
	long int	num;

	length = 0;
	num = n;
	if (!num)
		return (1);
	if (num < 0)
	{
		length++;
		num *= -1;
	}
	while (num)
	{
		num /= 10;
		length++;
	}
	return (length);
}

void	ft_inttochar(char *str, int n, int length)
{
	int			i;
	long int	num;

	i = 0;
	num = n;
	if (num < 0)
	{
		str[i] = '-';
		num *= -1;
	}
	if (num == 0)
		str[i] = '0';
	while (i < length && num)
	{
		if (str[length] == '-')
			return ;
		str[length - i - 1] = (num % 10) + '0';
		num /= 10;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int		length;
	int		neg;
	char	*res;

	neg = 1;
	length = ft_countnum(n);
	res = malloc(sizeof(char) * length + 1);
	if (!res)
		return (NULL);
	ft_inttochar(res, n, length);
	res[length] = '\0';
	return (res);
}
