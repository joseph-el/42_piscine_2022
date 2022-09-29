/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:25:08 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/12 09:26:54 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	the_last;

	the_last = 'z';
	while (the_last >= 'a')
	{
		write(1, &the_last, 1);
		the_last --;
	}
}
