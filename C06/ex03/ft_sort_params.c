/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:12:08 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/02 20:57:43 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compare(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1 != 0)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	swap(char **arg1, char **arg2)
{
	char	*temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

void	sort(int count, char **args)
{
	int		i;
	int		swapped;
	char	*temp;

	i = 1;
	while (1)
	{
		swapped = 0;
		while (i < count - 1)
		{
			if (compare(args[i], args[i + 1]) > 0)
			{
				temp = args[i];
				args[i] = args[i + 1];
				args[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
		if (swapped == 0)
			break ;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	sort(argc, argv);
	while (i < argc)
	{
		while (argv[i][j] != 0)
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
