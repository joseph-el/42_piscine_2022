/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:04:18 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/30 23:27:28 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	def;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	def = max - min;
	tab = malloc(sizeof(int) * def);
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (i < def)
	{
		tab[i] = min;
		i ++;
		min ++;
	}
	return (def);
}
