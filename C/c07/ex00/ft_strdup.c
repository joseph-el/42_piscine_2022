/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:55:02 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/30 18:59:58 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		l;

	l = len(src);
	i = 0;
	dest = malloc(sizeof(char) * l + 1);
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
			i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char lol[] = "hello";
	char *tst;
	tst = ft_strdup(lol);
	printf("%s\n",tst);
}
*/
