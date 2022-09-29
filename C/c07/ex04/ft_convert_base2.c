/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:42:45 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/30 18:07:39 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *nbr, char *base);
int	len(char *str);
int	check_base(char *str);

int	counter_base(int nbr, char *base)
{
	int		count;
	long	n;
	int		oky;

	n = nbr;
	count = 0;
	oky = len(base);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count ++;
	}
	while (n > 0)
	{
		n /= oky;
		count ++;
	}
	return (count);
}

void	patsh_putnbr(int nbr, char *str, char *stock, int len_res)
{
	int	i;
	int	l_str;
	int	sp;

	i = len_res - 1;
	l_str = len(str);
	sp = 0;
	if (nbr < 0)
	{
		stock[0] = '-';
		nbr *= -1;
		sp = 1;
	}
	while (i >= sp)
	{
		stock[i] = str[nbr % l_str];
		nbr /= l_str;
		i --;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*my;
	long	decimal;
	int		li;

	if (!nbr || !base_from || !base_to)
		return (0);
	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	decimal = ft_atoi_base(nbr, base_from);
	li = counter_base(decimal, base_to);
	my = malloc(li + 1);
	if (!my)
		return (0);
	patsh_putnbr(decimal, base_to, my, li);
	my[li] = '\0';
	return (my);
}
