/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:38:52 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:40:02 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char reverse_bits(unsigned char b)
{
	b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
	b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
	b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
	return b;
}

unsigned char reverse_bits2(unsigned char b)
{
	unsigned char	r = 0;
	unsigned		char_len = 8;

	while (char_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}

unsigned char reverse_bits3(unsigned char b)
{
	b = (b * 0x0202020202ULL & 0x010884422010ULL) % 0x3ff;
	return (b);
}

int	main(void)
{
	unsigned char c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
