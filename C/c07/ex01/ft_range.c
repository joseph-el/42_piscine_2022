/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:00:30 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/30 19:00:47 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	def;

	i = 0;
	if (min >= max)
		return (0);
	def = max - min;
	tab = malloc(sizeof(int) * def);
	if (!tab)
		return (0);
	while (i < def)
	{
		tab[i] = min;
		min ++;
		i ++;
	}
	return (tab);
}
