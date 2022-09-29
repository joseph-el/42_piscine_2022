/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:48:53 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/17 09:58:48 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowcase(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
		i ++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	d;

	i = 0;
	ft_lowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[i] -= 32;
	while (str[i + 1] != '\0')
	{
		d = str[i];
		if (! (d >= 97 && d <= 122)
			&& ! (d >= 48 && d <= 57) && ! (d >= 'A' && d <= 'Z'))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		}
		i ++;
	}
	return (str);
}
