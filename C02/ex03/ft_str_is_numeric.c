/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:07:05 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/21 11:40:19 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			continue ;
		}
		return (0);
	}
	return (1);
}
