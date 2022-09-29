/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:53:53 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/06/01 09:14:05 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		l;

	l = len(src);
	i = 0;
	dest = malloc(sizeof(char) * l + 1);
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
			i ++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	i = 0;
	str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (! str)
		return (NULL);
	while (i < ac)
	{
		str[i].size = len(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i ++;
	}
	str[i].str = NULL;
	return (str);
}
