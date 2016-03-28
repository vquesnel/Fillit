/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 23:27:11 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/28 20:16:17 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_4(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] == '#')
			j++;
		if (j > 4)
			return (1);
		if (map[i] == '\n' && (map[i + 1] == '\n' || map[i + 1] == '\0'))
		{
			if (j != 4)
				return (1);
			else
				j = 0;
		}
		i++;
	}
	return (0);
}

int		ft_count_tetriminos(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '\n' && (s[i + 1] == '\n' || s[i + 1] == '\0'))
		{
			i++;
			j++;
		}
		else
			i++;
	}
	if (j > 26)
		return (27);
	return (j);
}

int			ft_get_char(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '.' || map[i] == '#' || map[i] == '\n')
			i++;
		else
			return (1);
	}
	return (0);
}

int			ft_get_size(char *map)
{
	int	k;
	int	j;
	int	l;
	int	i;

	i = 0;
	k = 0;
	j = 0;
	l = 4;
	while (map[i])
	{
		if (map[l] == '\n')
		{
			l += 5;
			j++;
		}
		if (map[i] == '\n' && (map[i + 1] == '\n' || map[i + 1] == '\0') && l++)
			k++;
		i++;
	}
	if (!k)
		return (0);
	if (j / k != 4)
		return (1);
	return (0);
}
