/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:47:39 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:51:02 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_isspace(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t'
			|| c == '\r' || c == '\v' || c == '\f') ? 1 : 0);
}

static int		r_size(char *s)
{
	unsigned int len;

	len = 0;
	while (*s)
	{
		if (ft_isspace(*s))
			++s;
		else
		{
			++len;
			while (*s && !ft_isspace(*s))
				++s;
		}
	}
	return (len);
}

char			**ft_split(char *s)
{
	int		i = 0;
	int		j = 0;
	int		k;
	char	**r;
	int		w_len = 0;

	if (!(r = (char **)malloc(sizeof(char*) * (r_size(s) + 1))))
		return (0);
	while (s[i] && j < r_size(s))
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		while (s[i] && !ft_isspace(s[i]))
		{
			w_len++;
			i++;
		}
		if (!(r[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (0);
		k = 0;
		while (w_len)
			r[j][k++] = s[i - w_len--];
		r[j++][k] = '\0';
	}
	return (r);
}
