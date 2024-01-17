/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:04:29 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/31 14:25:31 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*arr;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (src[size] != 0)
		size++;
	arr = malloc(size + 1);
	if (!arr)
		return (NULL);
	while (src[i] != 0)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = 0;
	return (arr);
}
