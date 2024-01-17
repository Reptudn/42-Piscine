/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:29:04 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/17 11:37:08 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_nums[3];

void	ft_print_comp(void)
{
	g_nums[0] = '0';
	g_nums[1] = '0';
	g_nums[2] = '0';
	while (g_nums[0] < '8')
	{
		g_nums[1] = g_nums[0] + 1;
		while (g_nums[1] < '9')
		{
			g_nums[2] = g_nums[1] + 1;
			while (g_nums[2] <= '9')
			{
				write(1, &g_nums[0], 1);
				write(1, &g_nums[1], 1);
				write(1, &g_nums[2], 1);
				if (g_nums[0] != '7')
					write(1, ", ", 2);
				g_nums[2]++;
			}
			g_nums[1]++;
		}
		g_nums[0]++;
	}
}
