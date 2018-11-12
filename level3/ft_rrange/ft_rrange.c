/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:42:17 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:46:02 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*r;
	int	len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	 while (len--)
		 r[len] = (end >= start) ? start++ : start--;
	return (r);
}
