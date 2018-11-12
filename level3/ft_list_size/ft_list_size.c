/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:17:59 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:19:37 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		s;
	t_list	*node;

	s = 0;
	node = begin_list;
	while (node)
	{
		++s;
		node = node->next;
	}
	return (s);
}
