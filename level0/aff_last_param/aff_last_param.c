/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:33:38 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:34:29 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_last_param(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_last_param(argv[argc - 1]);
	}
	return (0);
}
