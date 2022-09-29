/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:47:37 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/17 10:06:35 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = len_str(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (len);
}
