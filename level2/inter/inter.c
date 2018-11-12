/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:38:12 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:40:10 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *str1, char *str2) {
	int vf[128];
	int	i;
	char c;

	i = 0;
	while (i < 128)
		vf[i++] = 0;

	i = 0;
	while (str2[i]) {
		if (vf[(int)str2[i]] == 0)
			vf[(int)str2[i]] = 1;
		i++;
	}

	i = 0;
	while (str1[i]) {
		if (vf[(int)str1[i]] == 1)
			vf[(int)str1[i]] = 2;
		i++;
	}

	i = 0;
	while (i < 128) {
		if (vf[i] == 2)
		{
			c = i;
			write(1, &c, 1);
		}
		i++;
	}

}

int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
