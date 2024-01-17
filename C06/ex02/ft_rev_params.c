/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:10:13 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/02 20:35:18 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	c;

	j = 0;
	c = argc - 1;
	while (c > 0)
	{
		while (argv[c][j] != 0)
		{
			write(1, &argv[c][j], 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		c--;
	}
}
