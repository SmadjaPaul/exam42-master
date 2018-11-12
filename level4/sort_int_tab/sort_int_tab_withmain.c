/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab_withmain.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:48:22 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:50:55 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	sort_int_tab_withmain(int *tab, unsigned int size)
{
	unsigned	a = 0;
	unsigned	i = 0;

	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			a = i;
		}
		while (a)
		{
			if (tab[a - 1] > tab[a])
			{
				ft_swap(&tab[a - 1], &tab[a]);
				--a;
			}
			else
				a = 0;
		}
		++i;
	}
}

int		main(void)
{
	int a[6] = {9, 7, 6, 4, 5, 10};
	int i = 0;
	int size = 6;

	sort_int_tab_withmain(a, size);
	while (i < size)
		printf("%d", a[i++]);
	return (0);
}
