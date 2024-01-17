/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:24:16 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/28 16:42:53 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] != 0 && i < n - 1 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(int argc, char **argv)
// {
// 	unsigned int n = 3;
// 	printf(ft_strncmp(argv[1], argv[2], n) == 0 ? 
// "Given strings are equal -> %s,
//  %s upto %d chars" 
// : "Given strngs are ot equal -> %s, %s upto %d chars", argv[1], argv[2], n);
// }
