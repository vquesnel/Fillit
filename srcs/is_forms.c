/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_forms.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 23:25:45 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/22 15:27:48 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static size_t	*ft_set_tab(void)
{
	size_t		*tab;
	size_t		i;

	i = 0;
	tab = (size_t *)malloc(sizeof(size_t) * 19);
	while (i < 7)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

static size_t	*ft_is_forms_1(char *map, char c)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_set_tab();
	while (start < 546)
	{
		if (!map[start])
			break ;
		buf = ft_strsub(map, start, 20);
		if (ft_is_o(buf, c) == 1)
			tab[0]++;
		if (ft_is_i(buf, c) == 1)
			tab[1]++;
		if (ft_is_i(buf, c) == 2)
			tab[2]++;
		if (ft_is_t(buf, c) == 1)
			tab[3]++;
		if (ft_is_t(buf, c) == 2)
			tab[4]++;
		start = start + 21;
	}
	return (tab);
}

static size_t	*ft_is_forms_2(char *map, char c)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_is_forms_1(map, c);
	while (start < 546)
	{
		if (!map[start])
			break ;
		buf = ft_strsub(map, start, 20);
		if (ft_is_t(buf, c) == 4)
			tab[6]++;
		if (ft_is_s(buf, c) == 1)
			tab[7]++;
		if (ft_is_s(buf, c) == 2)
			tab[8]++;
		if (ft_is_z(buf, c) == 1)
			tab[9]++;
		if (ft_is_z(buf, c) == 2)
			tab[10]++;
		start = start + 21;
	}
	return (tab);
}

static size_t	*ft_is_forms_3(char *map, char c)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_is_forms_2(map, c);
	while (start < 546)
	{
		if (!map[start])
			break ;
		buf = ft_strsub(map, start, 20);
		if (ft_is_l(buf, c) == 2)
			tab[12]++;
		if (ft_is_l(buf, c) == 3)
			tab[13]++;
		if (ft_is_l(buf, c) == 4)
			tab[14]++;
		if (ft_is_j(buf, c) == 1)
			tab[15]++;
		if (ft_is_j(buf, c) == 2)
			tab[16]++;
		start = start + 21;
	}
	return (tab);
}

size_t			*ft_is_forms_4(char *map, char c)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_is_forms_3(map, c);
	while (start < 546)
	{
		if (!map[start])
			break ;
		buf = ft_strsub(map, start, 20);
		if (ft_is_t(buf, c) == 3)
			tab[5]++;
		if (ft_is_l(buf, c) == 1)
			tab[11]++;
		if (ft_is_j(buf, c) == 3)
			tab[17]++;
		if (ft_is_j(buf, c) == 4)
			tab[18]++;
		start = start + 21;
	}
	return (tab);
}
