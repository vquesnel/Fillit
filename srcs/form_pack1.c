/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_pack1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 23:25:02 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/22 15:27:24 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_is_o(char *map, char c)
{
	size_t	i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == c && map[i + 1] == c) && (map[i + 5] == c &&\
					map[i + 6] == c))
			return (1);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_i(char *map, char c)
{
	size_t	i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == c && map[i + 1] == c) && (map[i + 2] == c &&\
					map[i + 3] == c))
			return (2);
		if ((map[i] == c && map[i + 5] == c) && (map[i + 10] == c &&\
					map[i + 15] == c))
			return (1);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_z(char *map, char c)
{
	size_t	i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == c && map[i + 1] == c) && (map[i + 6] == c &&\
					map[i + 7] == c))
			return (1);
		if ((map[i] == c && map[i + 4] == c) && (map[i + 5] == c &&\
					map[i + 9] == c))
			return (2);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_s(char *map, char c)
{
	size_t	i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == c && map[i + 1] == c) && (map[i + 4] == c &&\
					map[i + 5] == c))
			return (1);
		if ((map[i] == c && map[i + 5] == c) && (map[i + 6] == c &&\
					map[i + 11] == c))
			return (2);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_t(char *map, char c)
{
	size_t	i;

	i = 0;
	while (map[i])
	{
		if (map[i] == c && map[i + 5] == c && map[i + 6] == c &&\
				map[i + 10] == c)
			return (1);
		else if ((map[i] == c && map[i + 1] == c) && (map[i + 2] == c &&\
					map[i + 6] == c))
			return (2);
		else if ((map[i] == c && map[i + 4] == c) && (map[i + 5] == c &&\
					map[i + 10] == c))
			return (3);
		else if ((map[i] == c && map[i + 4] == c) && (map[i + 5] == c &&\
					map[i + 6] == c))
			return (4);
		else
			i++;
	}
	return (0);
}
