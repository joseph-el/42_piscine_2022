/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:28:23 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/17 12:45:45 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x >= 1 && y >= 1)
	{
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				if ((i == 1 && j == 1) || (i == y && j == x))
					ft_putchar('/');
				else if ((i == 1 && j == x) || (i == y && j == 1))
					ft_putchar('\\');
				else if (i == 1 || i == y || j == 1 || j == x)
					ft_putchar('*');
				else
					ft_putchar(' ');
				j ++;
			}
			ft_putchar('\n');
			i ++;
		}
	}
}
