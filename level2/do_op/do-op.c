/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:37:33 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:40:17 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if  (argc == 4)
	{
		if (*argv[2] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if (*argv[2] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if (*argv[2] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if (*argv[2] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if (*argv[2] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
