/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_withmain.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:41:51 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:45:42 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** replace #include libft.h with #include <stdlib.h>
** replace ft_intnew(n - 1) with protected malloc(sizeof(int) * (n));
*/

int		*ft_range(int min, int max)
{
	int		n;
	int		*s;

	n = max >= min ? max - min : min - max;
	if (!(s = ft_intnew(n - 1)))
		return (NULL);
	while (max != min)
		*s++ = max > min ? min++ : min--;
	*s = min;
	return (s - n);
}

int		main(int ac, char **av)
{
	int		*s;
	int		n;
	int		min;
	int		max;

	min = ft_atoi(av[1]);
	max = ft_atoi(av[2]);
	n = max >= min ? max - min + 1 : min - max + 1;
	if (ac != 3)
		return (0);
	s = ft_range(min, max);
	while (*s && n--)
	{
		ft_putnbr(*s++);
		ft_putchar('\n');
	}
	return (1);
}
