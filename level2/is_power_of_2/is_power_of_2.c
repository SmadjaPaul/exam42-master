/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:38:20 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:40:08 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0) 
		n /= 2;
	return ((n == 1) ? 1 : 0);
}
