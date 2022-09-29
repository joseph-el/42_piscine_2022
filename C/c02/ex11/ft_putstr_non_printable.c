/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:43:02 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/17 10:53:59 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	disp(char x)
{
	write(1, &x, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! (str[i] >= 32 && str[i] <= 126))
		{
			disp('\\');
			disp("0123456789abcdf"[str[i] / 16]);
			disp("0123456789abcdf"[str[i] % 16]);
			i ++;
		}
		disp(str[i]);
		i ++;
	}
}
