/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:43:34 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/06 17:34:22 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_total_length(char **strs, char *sep, int size)
{
	int	length;
	int	j;
	int	i;
	int	sep_len;

	length = 0;
	i = 0;
	sep_len = 0;
	while (sep[sep_len] != 0)
		sep_len++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			length++;
			j++;
		}
		length += sep_len;
		i++;
	}
	length -= sep_len;
	return ((length + 1) * sizeof(char));
}

void	joined_string(char **strs, char *sep, char *new, int size)
{
	int		i;
	int		j;
	int		u;
	int		total;

	i = 0;
	j = 0;
	u = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		u = 0;
		while (strs[i][j] != 0)
			new[total++] = strs[i][j++];
		if (i == size - 1)
			break ;
		while (sep[u] != 0 && strs[i + 1] != 0)
			new[total++] = sep[u++];
		i++;
	}
	new[total] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;

	new = malloc(get_total_length(strs, sep, size));
	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	if (!new)
		return ((char *)malloc(sizeof(char)));
	joined_string(strs, sep, new, size);
	return (new);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *sep = "";
// 	char *string[] = {"Hello", "World"};
// 	printf("Given: %s :: %s\nResult: %s",
//  string[0], sep,  ft_strjoin(3, NULL, NULL));
// }