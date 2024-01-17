/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:45:52 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/19 15:56:33 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;
	int		s;

	i = 0;
	s = 0;
	if (size % 2 == 1)
		s = 1;
	while (i < ((size / 2) - s))
	{
		temp = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = temp;
		i++;
	}
}
