/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:02:15 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/27 14:03:09 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_binary(int nbr, char buffer[], int i, int buffer_lenght)
{
	while (nbr > 0)
	{
		buffer[++i] = (nbr % 2) + '0';
		nbr /= 2;
	}
	while (buffer_lenght > 0)
	{
		if (buffer[buffer_lenght] == '0' || buffer[buffer_lenght] == '1')
			write(1, &buffer[buffer_lenght], 1);
		buffer_lenght--;
	}
}

void	print_octal(int nbr, char buffer[], int i, int buffer_lenght)
{
	while (nbr > 0)
	{
		buffer[++i] = (nbr % 8) + '0';
		nbr /= 8;
	}
	while (buffer_lenght > 0)
	{
		if (buffer[buffer_lenght] >= '0' && buffer[buffer_lenght] <= '8')
			write(1, &buffer[buffer_lenght], 1);
		buffer_lenght--;
	}
}

void	print_hexadecimal(int nbr, char buffer[], int i, int buffer_lenght)
{
	char	hex[16];

	while (i < 16)
	{
		if (i < 9)
			hex[i] = i + '0';
		else
			hex[i] = i + 'a';
		i++;
	}
	i = 0;
	while (nbr > 0)
	{
		buffer[++i] = hex[nbr % 16];
		nbr /= 16;
	}
	while (buffer_lenght > 0)
	{
		if ((buffer[buffer_lenght] >= '0' && buffer[buffer_lenght] <= '9'))
			write(1, &buffer[buffer_lenght], 1);
		else if (buffer[buffer_lenght] >= 'a' && buffer[buffer_lenght] <= 'f')
			write(1, &buffer[buffer_lenght], 1);
		buffer_lenght--;
	}
}

void	print_decimal(int nbr, char buffer[], int i, int buffer_lenght)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		buffer[++i] = (nbr % 10) + '0';
		nbr /= 10;
	}
	while (buffer_lenght > 0)
	{
		if (buffer[buffer_lenght] >= '0' && buffer[buffer_lenght] <= '9')
			write(1, &buffer[buffer_lenght], 1);
		buffer_lenght--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	buffer[25];
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 25;
	if (base[0] == 0 || base[1] == 0)
		return ;
	if (base[0] == '0' && base[3] == 0)
		print_binary(nbr, buffer, i, size);
	else if (base[3] == 'e' && base[4] == 'y')
		print_octal(nbr, buffer, i, size);
	else if (base[9] == '9' && base[10] == 0)
		print_decimal(nbr, buffer, i, size);
	else
		print_hexadecimal(nbr, buffer, i, size);
}

int main(int argc, char **argv)
{
	ft_putnbr_base(123456, "0123456789ABC");
}