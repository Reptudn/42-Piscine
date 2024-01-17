/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:51:12 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/05 18:32:20 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	print_number(char buffer[], int j, int buffer_size)
{
	while (j < buffer_size)
	{
		write(1, &buffer[j], 1);
		j++;
	}
}

int	special(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	buffer[30];
	int		buffer_size;

	i = 0;
	buffer_size = 30;
	if (special(nb) == 1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		buffer[buffer_size - 1 - i] = '0' + (nb % 10);
		nb /= 10;
		i++;
	}
	print_number(buffer, buffer_size - i, buffer_size);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		print(par[i].str);
		ft_putnbr(par[i].size);
		print(par[i].copy);
		i++;
	}
}
