/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:37:01 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/30 12:11:07 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					lenght;
	unsigned int		i;

	i = 0;
	lenght = 0;
	while (dest[lenght] != 0)
		lenght++;
	while (src[i] != 0 && i < nb)
	{
		dest[i + lenght] = src[i];
		i++;
	}
	dest[i + lenght] = 0;
	return (dest);
}

// int main (int argc, char **argv)
// {
// 	unsigned int n = 4;
// 	printf("Given strings: %s and %s with n of 
// amount %d\n", argv[1], argv[2], n);
// 	printf("Result -> %s\n", ft_strncat(argv[1], argv[2], n));
// }
