/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:47:23 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/16 19:19:25 by yoel-idr         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	one;
	int	next;

	one = len(dest);
	next = 0;
	while (src[next] != '\0')
	{
		dest[one] = src[next];
		one ++;
		next ++;
	}
	dest[one] = '\0';
	return (dest);
}
