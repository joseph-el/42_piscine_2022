/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:50:52 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/16 16:17:13 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	mid(int x)
{
	int	row;

	row = 1;
	while (row <= x)
	{
		if (row == 1 || row == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		row ++;
	}
	ft_putchar('\n');
}

void	last_and_first(int x)
{
	int	row;

	row = 1;
	while (row <= x)
	{
		if (row == 1 || row == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		row ++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	len;

	if (x >= 1 && y >= 1)
	{
		len = 1;
		while (len <= y)
		{
			if (len == 1)
				last_and_first(x);
			else if (len == y)
				last_and_first(x);
			else
				mid(x);
			len ++;
		}
	}
}
