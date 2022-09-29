/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:39:47 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/13 09:44:06 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result1;
	int	result2;

	result1 = *a / *b;
	result2 = *a % *b;
	*a = result1;
	*b = result2;
}
