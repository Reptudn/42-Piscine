/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:07:05 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/22 10:54:43 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lower_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	to_upper_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	is_letter(char c)
{
	if (((c >= 'A') && (c <= 'Z'))
		|| ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		str[i] = to_lower_case(str[i]);
		if (i == 0)
		{
			if (is_letter(str[i]) == 1)
				str[i] = to_upper_case(str[i]);
			i++;
			continue ;
		}
		if (is_letter(str[i - 1]) == 0
			&& is_number(str[i - 1]) == 0)
			str[i] = to_upper_case(str[i]);
		i++;
	}
	return (str);
}

// int main(){
// 	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(a)); // #include <stdio.h>
// }
