/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring_best_solution.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:47:56 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:50:59 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rostring(char *s)
{
	int		i = 0;
	int		w_len = 0;

	while (s[i])
	{
		while (ft_isblank(s[i]))
			i++;
		if (s[i] && !ft_isblank(s[i]))
		{
			if (!w_len)
				while (s[i] && !ft_isblank(s[i++]))
					w_len++;
			else
			{
				while (s[i] && !ft_isblank(s[i]) && write(1, &s[i++], 1));
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_isblank(s[i]))
		i++;
	while (w_len--)
		write(1, &s[i++], 1);
}

int		main(int ac, char **av)
{
	if (ac > 1 && *av[1])
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
