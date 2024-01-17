/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:25:40 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/28 16:34:15 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		lenght;
	int		i;

	i = 0;
	lenght = 0;
	while (dest[lenght] != 0)
		lenght++;
	while (src[i] != 0)
	{
		dest[i + lenght] = src[i];
		i++;
	}
	dest[i + lenght] = 0;
	return (dest);
}

// int main (int argc, char **argv)
// {
// 	printf("Given strings: %s and %s\n", argv[1], argv[2]);
// 	printf("Result -> %s", ft_strcat(argv[1], argv[2]));
// }
