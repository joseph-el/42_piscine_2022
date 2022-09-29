/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:05:13 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/23 19:30:27 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	disp(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	ft_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(int ac, char *av[])
{
	int		i;
	char	*sw;

	i = 1;
	while (i < (ac - 1))
	{
		if (ft_cmp(av[i], av[i + 1]) > 0)
		{
			sw = av[i];
			av[i] = av[i + 1];
			av[i + 1] = sw;
			i = 1;
		}
		else
			i ++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_swap(ac, av);
	while (i < ac)
	{
		disp(av[i]);
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
