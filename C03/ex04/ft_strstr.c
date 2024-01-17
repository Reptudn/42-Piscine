/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:40:23 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/24 12:53:51 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	comp(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (str[i + j] != 0 || to_find[j] != 0)
	{
		if (str[i + j] == to_find[j])
		{
			j++;
			continue ;
		}
		break ;
	}
	return (j);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			if (comp(str, to_find, i) < get_len(to_find))
			{
				i++;
				continue ;
			}
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

// int main (int argc, char **argv)
// {
// 	printf(ft_strstr(argv[1], argv[2]) == 0 ? 
// "String you were looking for wasn't found; %s" : "String %s found", 
// ft_strstr(argv[1], argv[2]));
// }
