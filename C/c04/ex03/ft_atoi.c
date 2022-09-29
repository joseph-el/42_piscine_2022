/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 10:15:42 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/24 09:26:02 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str)
{
	int	ch;

	ch = 0;
	while (*str == '-' || *str == '+' || *str <= 32)
	{
		if (*str == '-')
			ch ++;
		str ++;
	}
	if (ch % 2 != 0)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	si;

	if (check(str) == 1)
		si = -1;
	else
		si = 1;
	while (*str <= 32)
		str ++;
	while (*str == '-' || *str == '+')
		str ++;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - 48);
		str ++;
	}
	return (res * si);
}
