/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:07:08 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/07 12:09:49 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	total;
	int	*arr;
	int	i;

	total = max - min;
	if (total <= 0)
		return (0);
	arr = (int *)malloc(total * sizeof(int));
	if (!arr)
	{
		arr = 0;
		return (0);
	}
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

// #include <stdio.h>
// int main(){
// 	int i;
// 	int min, max;
// 	min = __INT_MAX__ - 1000;
// 	max = __INT_MAX__;
// 	int *r = ft_range(min, max);

// 	for (i = 0; i < (max - min); i++)
// 	{
// 		printf("%d\n", r[i]);
// 	}

// }
