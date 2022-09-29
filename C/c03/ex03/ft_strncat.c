/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:19:52 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/19 11:58:18 by yoel-idr         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	low;

	n = len(dest);
	low = 0;
	while (src[low] != '\0' && low < nb)
	{
		dest[n] = src[low];
		low ++;
		n ++;
	}
	dest[n] = '\0';
	return (dest);
}
