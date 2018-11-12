/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:38:42 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:40:03 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (octet >= 0 && i)
	{
		(octet / i) ? write(1, "1", 1) : write(1, "0", 1);
		(octet / i) ? octet -= i : 0;
		i /= 2;
	}
}

void	print_bits2(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

int		main(void)//
{//
	int n = 64;
	print_bits(n);//
	write(1, "\n", 1);//
	print_bits2(n);//
}//
