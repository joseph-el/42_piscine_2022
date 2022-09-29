/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:54:58 by yoel-idr          #+#    #+#             */
/*   Updated: 2022/05/30 19:11:24 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i ++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_string_in_str(char *str, char *sep)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i + 1], sep) == 1 && is_sep(str[i], sep) == 0)
			counter ++;
		i ++;
	}
	return (counter);
}

void	build_string(char *test, char *here, char *sep)
{
	int	i;

	i = 0;
	while (is_sep(here[i], sep) == 0)
	{
		test[i] = here[i];
		i ++;
	}
	test[i] = '\0';
}

void	split_string(char **stock, char *str, char *sep)
{
	int	i;
	int	t;
	int	d;

	i = 0;
	d = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], sep) == 1)
			i ++;
		else
		{
			t = 0;
			while (is_sep(str[i + t], sep) == 0)
				t ++;
			stock[d] = (char *)malloc(sizeof(char) * (t + 1));
			build_string(stock[d], str + i, sep);
			i += t;
			d ++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		word_nbr;
	char	**final;

	word_nbr = count_string_in_str(str, charset);
	final = (char **)malloc(sizeof(char *) * (word_nbr + 1));
	if (!final)
		return (0);
	final[word_nbr] = 0;
	split_string(final, str, charset);
	return (final);
}
/*
int	main(int argc, char **argv)
{
		int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
*/
