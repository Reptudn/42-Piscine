/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:52:19 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/30 15:15:12 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

char	get_sign(char *str)
{
	int		i;
	int		plus_amount;
	int		minus_amount;

	i = 0;
	plus_amount = 0;
	minus_amount = 0;
	while (str[i] != 0)
	{
		if (str[i] == '+')
			plus_amount++;
		else if (str[i] == '-')
			minus_amount++;
		i++;
	}
	if (plus_amount >= minus_amount)
		return ('+');
	return ('-');
}

int	has_numbers(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (is_number(str[i]))
			count++;
	}
	if (count == 0)
		return (0);
	return (1);
}

int	to_integer(char buffer[], char sign, char *str)
{
	int	nb;
	int	i;
	int	leading;

	nb = 0;
	i = 0;
	leading = 0;
	if (str[0] == 0 && !has_numbers(str))
		return (0);
	while (buffer[i] != 0)
	{
		nb += buffer[i] - '0';
		if (buffer[i + 1] != 0 && leading == 0)
			nb = nb * 10;
		i++;
	}
	if (sign == '-')
		nb = -nb;
	return (nb);
}

int	ft_atoi(char *str)
{
	char	buffer[20];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		if (i == 0 && !is_number(str[i]))
		{
			i++;
			continue ;
		}
		else if (is_number(str[i]))
		{
			if (str[i + 1] != 0 && !is_number(str[i + 1]))
			{
				buffer[j] = str[i];
				break ;
			}
			buffer[j++] = str[i];
		}
		i++;
	}
	return (to_integer(buffer, get_sign(str), str));
}
