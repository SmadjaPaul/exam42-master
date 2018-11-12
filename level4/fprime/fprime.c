/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:46:58 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:51:09 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(unsigned int nb)
{
	unsigned	i;

	if (nb == 1)
		printf("1");
	else
	{
		i = 1;
		while (nb > 1)
		{
			if (nb % ++i == 0)
			{
				printf("%d", i);
				nb /= i;
				if (nb > 1)
					printf("*");
				--i;
			}
		}
	}
}


int		main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
