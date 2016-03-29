/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos_handling.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 23:27:27 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/29 11:32:35 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	reset_tetriminos(char *tetriminos)
{
	int	i;

	i = 0;
	while (tetriminos[i])
	{
		if (tetriminos[i] >= 'A' && tetriminos[i] <= 'Z')
			tetriminos[i] += 32;
		++i;
	}
}

void	reset_all_tetriminos(char **tetriminos)
{
	int	i;

	i = 0;
	while (tetriminos[i])
	{
		reset_tetriminos(tetriminos[i]);
		++i;
	}
}

int		set_tetriminos(char *tetriminos, int i, char *solution, int j)
{
	int	hashnb;
	int	len;

	hashnb = 0;
	len = 0;
	while (solution[len] != '\n')
		++len;
	++len;
	if (i >= 0 && i < 20 && j >= 0 && j < (len * (len - 1))
			&& tetriminos[i] >= 'a' && tetriminos[i] <= 'z' &&
			solution[j] == '.')
	{
		tetriminos[i] -= 32;
		solution[j] = tetriminos[i];
		++hashnb;
		hashnb += set_tetriminos(tetriminos, i + 1, solution, j + 1);
		hashnb += set_tetriminos(tetriminos, i + 5, solution, j + len);
		hashnb += set_tetriminos(tetriminos, i - 1, solution, j - 1);
	}
	return (hashnb);
}

int		ft_add_tab(int *tab)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (index < 19)
	{
		i = tab[index] + i;
		index++;
	}
	return (i);
}
