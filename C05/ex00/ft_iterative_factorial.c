/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:09:44 by jkauker           #+#    #+#             */
/*   Updated: 2023/08/31 12:12:20 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	nb -= 1;
	while ((nb - 1) > 0)
	{
		number *= nb;
		nb--;
	}
	return (number);
}
