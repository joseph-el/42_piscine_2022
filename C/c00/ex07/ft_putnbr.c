/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:03:56 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/12 15:47:34 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	this_chara(char chara)
{
	write(1, &chara, 1);
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num >= 0 && num <= 9)
		this_chara(num + '0');
	else if (num < 0)
	{
		this_chara('-');
		ft_putnbr(num * -1);
	}
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}
