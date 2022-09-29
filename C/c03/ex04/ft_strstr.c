/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:26:26 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/21 17:29:36 by yoel-idr         ###   ########.fr       */
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

int	check_double(char *s1, char *s2, int len)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i ++;
	if ((i - 1) == len)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	l;

	if (to_find[0] == '\0')
		return (str);
	l = len(to_find) - 1;
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			if (check_double(str, to_find, l) == 1)
				return (str);
		}
		str ++;
	}
	return (0);
}
