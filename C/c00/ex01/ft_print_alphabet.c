/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:22:58 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/12 09:24:43 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	the_alpha;

	the_alpha = 'a';
	while (the_alpha <= 'z')
	{
		write(1, &the_alpha, 1);
		the_alpha ++;
	}
}
