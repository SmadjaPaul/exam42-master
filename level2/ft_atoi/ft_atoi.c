/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:37:40 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:40:15 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //

int		ft_atoi(char *s)
{
	int		sign;
	long	r;

	r = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (sign * (int)r);
}

int		main(void)//
{//
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
}//
