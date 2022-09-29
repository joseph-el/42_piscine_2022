/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:07:46 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/30 23:25:08 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

int	ft_strcat(char *dest, char *str)
{
	int	one;
	int	next;
	int	res;

	one = len(dest);
	next = 0;
	while (str[next] != '\0')
	{
		dest[one] = str[next];
		next ++;
		one ++;
	}
	res = len(str);
	dest[next] = '\0';
	return (res);
}

int	a(int size, char **str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (i < size)
	{
		word += len(str[i]);
		i ++;
	}
	return (word);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*stock;
	char	*oux;
	int		i;

	if (size == 0)
	{
		stock = malloc(1);
		stock[0] = 0;
		return (stock);
	}
	i = -1;
	stock = malloc(sizeof(char) * (a(size, strs) + (len(sep) * size - 1) + 1));
	if (!stock)
		return (0);
	stock[0] = 0;
	oux = stock;
	while (++i < size)
	{
		stock += ft_strcat(stock, strs[i]);
		if (i < size - 1)
			stock += ft_strcat(stock, sep);
	}
	*stock = '\0';
	return (oux);
}
