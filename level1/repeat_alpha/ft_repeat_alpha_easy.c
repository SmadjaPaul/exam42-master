/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha_easy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:28:52 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/13 16:17:40 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
    int count;

    count = 0;
    while (*str)
    {
        if (*str >= 'a' || *str <= 'z')
            count = *str - 'a' + 1;
        else if (*str >= 'A' || *str <= 'Z')
            count = *str - 'A' + 1;
        else;
        while (count > 0)
        {
            write(1, str, 1);
            count--;
        }
        str++;
    }
    write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
