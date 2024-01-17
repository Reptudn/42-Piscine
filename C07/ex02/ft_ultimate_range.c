/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:18:56 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/04 19:55:53 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buff = (int *)malloc((max - min) * sizeof(int));
	if (!buff)
	{
		buff = 0;
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		buff[i] = min + i;
		i++;
	}
	*range = buff;
	return (i);
}

// int main(void)
// {
// 	int **range;
// 	int min, max;
// 	min = 5;
// 	max = 11;
// 	printf("%d", ft_ultimate_range(range, min, max));
// }
