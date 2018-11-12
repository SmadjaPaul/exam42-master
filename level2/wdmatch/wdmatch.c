/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:39:36 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:39:58 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int len = 0;
	int i = 0;

	while (s1[len])
		++len;
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? ++i : 0;
	if (i == len)
		write(1, s1, len);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
