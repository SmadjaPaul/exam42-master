/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:47:46 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:51:00 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rev_wstr(char *s)
{
	int	wc = 0;
	int	i = 0;
	int	len;
	int	a;

	while (s[i])
		if (!ft_isblank(s[i++]) && (!wc || ft_isblank(s[i - 2])))
			++wc;
	while (s[--i])
	{
		if (!ft_isblank(s[i]) && wc--)
		{
			a = 0;
			len = 1;
			while (s[i - 1] && !ft_isblank(s[i - 1]) && ++len)
				--i;
			while (len-- && write(1, &s[i + a++], 1));
			(wc) ? write(1, " ", 1) : 0;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
