/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:34:28 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/12 13:21:07 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_tree(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	char	the_first;
	char	the_both;
	char	the_last;

	the_first = '0';
	while (the_first <= '7')
	{
		the_both = the_first + 1;
		while (the_both <= '8')
		{
			the_last = the_both + 1;
			while (the_last <= '9')
			{
				display_tree(the_first, the_both, the_last);
				if (the_first != '7')
					write(1, ", ", 2);
				the_last ++;
			}
			the_both ++;
		}
		the_first ++;
	}
}
