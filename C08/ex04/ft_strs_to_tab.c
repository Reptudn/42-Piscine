/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:56:53 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/05 18:32:23 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;	
	int			i;
	int			size;

	i = 0;
	stock = malloc((ac + 1) * sizeof(char));
	if (!stock)
		return (0);
	while (i < ac)
	{
		size = 0;
		while (av[i][size] != 0)
			size++;
		stock[i].copy = malloc((size + 1) * sizeof(char));
		if (!stock[i].copy)
			return (0);
		ft_strcpy(stock[i].copy, av[i]);
		stock[i].size = size;
		stock[i].str = av[i];
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
