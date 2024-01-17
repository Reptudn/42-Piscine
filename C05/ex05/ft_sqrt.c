/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:48:40 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/03 11:08:10 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	double_modulo(double x, double y)
{
	return (x - (x / y) * y);
}

int	absolute(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_sqrt(int nb)
{
	int	i;
	int	max;

	i = 1;
	max = nb / 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < 46341 && i < max)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// after Newton-Raphson
// int	ft_sqrt(int nb)
// {
// 	double	d;
// 	double	r;
// 	int		i;

// 	d = nb;
// 	i = 0;
// 	if (nb == 0)
// 		return (0);
// 	while (1)
// 	{
// 		r = 0.5 * (d + (nb / d));
// 		if (absolute(r - d) < 1)
// 		{
// 			if (r - (int)r == 0)
// 				return (r);
// 			return (0);
// 		}
// 		d = r;
// 	}
// 	return (0);
// }
