/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:37:54 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:40:12 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;

	while (src[len])
		++len;
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	while (len >= 0)
	{
		s[len] = src[len];
		len--;
	}
	return (s);
}
