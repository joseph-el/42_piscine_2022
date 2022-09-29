/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:07:25 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/24 09:20:33 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

int	check_double(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j ++;
		}
		i ++;
	}
	return (1);
}

int	check_base(char *str)
{
	if (check_double(str) == 0)
		return (0);
	if (*str == '\0' || str[1] == '\0')
		return (0);
	while (*str != '\0')
	{
		if (*str == '+' || *str == '-')
			return (0);
		str ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		l_base;

	nb = nbr;
	l_base = len(base);
	if (check_base(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < l_base)
			ft_putchar(base[nb]);
		else if (nb >= l_base)
		{
			ft_putnbr_base(nb / l_base, base);
			ft_putnbr_base(nb % l_base, base);
		}
		else
			ft_putchar(nb + '0');
	}
}
