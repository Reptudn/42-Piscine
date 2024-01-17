/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:11:59 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/05 17:13:18 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int c)
{
	char	letter[16];
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i > 9)
			letter[i] = 'a' + (i - 10);
		else
			letter[i] = '0' + i;
		i++;
	}
	if (c < 16)
		write(1, "0", 1);
	i = 0;
	while (c > 0)
	{
		write(1, &letter[(c % 16)], 1);
		c /= 16;
		i++;
	}
}

int	is_not_printable(char c)
{
	if (c == ' ')
		return (0);
	if (c >= 126 || c <= 32)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (is_not_printable(str[i]) == 1)
		{
			write(1, "\\", 1);
			print_hex((int)str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char a[] = "Coucou\ntu vas\nbien ?";
	ft_putstr_non_printable(a);
}
