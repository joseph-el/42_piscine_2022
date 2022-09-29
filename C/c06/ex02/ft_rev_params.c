/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:31:21 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/23 19:36:47 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	while (i > 0)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i --;
	}
	return (0);
}
