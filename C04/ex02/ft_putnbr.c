/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:30:08 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/28 16:59:43 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
}

// int main (int argc, char **argv)
// {
// 	ft_putnbr(546342423);
// }
