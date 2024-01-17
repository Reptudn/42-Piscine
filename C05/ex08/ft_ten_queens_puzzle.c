/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:35:36 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/03 11:29:36 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_pos {
	int	col;
	int	row;
}	t_pos;

int	is_valid_placement(int field[10][10], t_pos position)
{
	return (0);
}

int	place_queen(int field[10][10], t_pos position)
{
	field[position.col][position.row] = 0;
}

int	ft_ten_queens_puzzle(void)
{
	int	field[10][10];
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (field[++x] != 0)
	{
		while (field[x][++y] != 0)
		{
			field[x][y] = -1;
		}
		y = 0;
		x++;
	}
}
