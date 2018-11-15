/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13_short.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:33:00 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/13 16:35:03 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'M' || str[i] >= 'a' && str[i] <= 'm')
			ft_putchar(str[i] + 13);
		else if (str[i] >= 'N' && str[i] <= 'Z' || str[i] >= 'n' && str[i] <= 'z' )
			ft_putchar(str[i] - 13);
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}