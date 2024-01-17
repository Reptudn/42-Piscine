/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauker <jkauker@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:33:28 by jkauker           #+#    #+#             */
/*   Updated: 2023/09/04 20:05:24 by jkauker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	char	letter[16];
	int		i;

	if (c == ' ')
	{
		write(1, "0a", 2);
		return ;
	}
	i = 0;
	while (i < 16)
	{
		if (i > 9)
			letter[i] = 'a' + (i - 10);
		else
			letter[i] = '0' + i;
		i++;
	}
	i = 0;
	while (c > 0)
	{
		write(1, &letter[(c % 16)], 1);
		c /= 16;
		i++;
	}
}

void	print_memory_addr(uintptr_t addr)
{
	int		i;
	int		j;
	int		rest;
	int		c[16];

	i = 0;
	while ((int)addr != 0)
	{
		i++;
		c[i] = (int)addr;
		addr = (int)addr / 10;
	}
	j = 0;
	rest = 16 - i;
	while (j < (16 - i - 1))
	{
		write(1, "0", 1);
		j++;
	}
	while (j > 0)
	{
		print_hex(c[j]);
		j--;
	}
	write(1, ": ", 2);
}

void	print_content(char c)
{
	if (c < 32 || c > 126)
		write(1, ".", 1);
	else
		write(1, &c, 1);
}

void	print_padding(int i, int j, char *str)
{
	int		p;

	while (j < 16 && str[i + j] != 0)
	{
		print_hex(str[i + j]);
		if ((j + 1) % 2 == 0)
			write(1, " ", 1);
		j++;
	}
	p = 15 - j;
	while (p > 0)
	{
		write(1, " ", 1);
		p--;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	int					j;
	char				*str;

	i = 0;
	j = 0;
	if (size == 0)
		return ((void *)((int *)addr));
	str = (char *)addr;
	while (i < size && str[i] != 0)
	{
		print_memory_addr((uintptr_t)addr);
		print_padding(i, j, str);
		while (j < 16 && str[i + j] != 0)
		{
			print_content(str[i + j]);
			j++;
		}
		write(1, "\n", 1);
		i += 16;
		j = 0;
	}
	return ((void *)((int *)addr));
}

int main(){
	char *str = "Bonjour c'est une bonne jour, il fait chaude mais sur la mainsion de 42 que je s'asseoir il y a des cimatiseurss\n";
	ft_print_memory((void *)str, 113);
}
