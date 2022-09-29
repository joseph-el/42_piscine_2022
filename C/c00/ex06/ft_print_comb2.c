/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:35:16 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/12 13:07:38 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	one_display(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	the_first;
	int	the_last;

	the_first = 0;
	the_last = 1;
	while (the_first <= 98)
	{
		while (the_last <= 99)
		{
			one_display((the_first / 10) + '0');
			one_display((the_first % 10) + '0');
			write(1, " ", 1);
			one_display((the_last / 10) + '0');
			one_display((the_last % 10) + '0');
			if (the_first != 98)
				write(1, ", ", 2);
			the_last ++;
		}
		the_first ++;
		the_last = the_first + 1;
	}
}
