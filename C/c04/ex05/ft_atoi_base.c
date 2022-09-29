/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:11:01 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/24 09:22:40 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (*str == '+' || *str == '-' || (*str >= 0 && *str <= 32))
			return (0);
		str ++;
	}
	return (1);
}

int	chara_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i ++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	si;
	int	i;

	i = 0;
	res = 0;
	si = 1;
	if (check_base(base) == 1)
	{
		while (str[i] == 32 || (str[i] <= 32))
			i ++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				si *= -1;
			i ++;
		}
		while (chara_index(str[i], base) != -1)
		{
			res = (res * len(base)) + chara_index(str[i], base);
			i ++;
		}
		return (res * si);
	}
	return (0);
}
