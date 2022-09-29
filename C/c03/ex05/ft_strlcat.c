/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:48:10 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/21 15:27:20 by yoel-idr         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	out;
	unsigned int	l_dest;
	unsigned int	l_src;

	i = 0;
	l_dest = len(dest);
	l_src = len(src);
	if (l_dest < size)
		out = l_dest + l_src;
	else
		out = l_src + size;
	if (size == 0)
		return (out);
	while (src[i] && l_dest + i < size - 1)
	{
		dest[l_dest + i] = src[i];
		i ++;
	}
	dest[l_dest + i] = '\0';
	return (out);
}
