/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 21:52:10 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/14 09:38:54 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	one;
	int	last;
	int	temp;

	one = 0;
	size -= 1;
	while (one < size)
	{
		last = 0;
		while (last < size)
		{
			if (tab[one] < tab[last])
			{
				temp = tab[one];
				tab[one] = tab[last];
				tab[last] = temp;
			}
			last ++;
		}
		one ++;
	}
}
