/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:00:18 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/21 15:08:03 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (str[i] != 0 && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
