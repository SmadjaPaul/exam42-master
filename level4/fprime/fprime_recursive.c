/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime_recursive.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:46:48 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:51:10 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime_recursive(int nb, int a, int i)
{
	a++;
	while (nb % i != 0 && i < nb)
		i++;
	if (nb % i == 0)
	{
		if (a != 1)
			printf("*");
		printf("%d", i);
		if (nb != i)
			fprime(nb / i, a, i);
	}
	else
		printf("%d", nb);
}


int		main(int ac, char **av)
{
	if (ac == 2 && av[1][0] != '\0')
		fprime(atoi(av[1]), 0, 2);
	printf("\n");
	return (0);
}
