/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:58:02 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/30 12:10:07 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	i = 0;
	if (src[0] == 0 || size == 0)
		return (0);
	while (src[src_len] != 0)
		src_len++;
	while (dest[dest_len] != 0)
		dest_len++;
	if (size <= dest_len)
		return (size + dest_len);
	while (src[i] != 0 && (i < size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (src_len + dest_len);
}

// int main(int argc, char **argv)
// {
// 	unsigned int n = 10;
// 	char *src = "bananensosse";
// 	char dest[10] = "man";
// 	printf("Total would be lenght is %d and the string 
// is %s", ft_strlcat(dest, src, n), dest);
// }
