/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:45:36 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/18 09:51:14 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		len;

	len = 0;
	while (1)
	{
		write(1, &str[len], 1);
		if (str[len] == 0)
			break ;
		len++;
	}
}
