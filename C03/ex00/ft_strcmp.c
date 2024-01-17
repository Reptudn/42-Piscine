/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:10:31 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/28 17:28:03 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char *str1 = "Hello World!";
// 	char *str2 = "Hello World!";
// 	char *str3 = "Hello Earth!";

// 	printf("Equal: %d\n", ft_strcmp(str1, str2));
// 	printf("Not equal: %d", ft_strcmp(str1, str3));
// }
