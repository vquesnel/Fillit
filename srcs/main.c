/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 23:26:13 by vquesnel          #+#    #+#             */
/*   Updated: 2016/04/21 10:07:36 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void	error(void)
{
	ft_putendl("error");
	exit(EXIT_FAILURE);
}

int		main(int ac, char **av)
{
	int			fd;
	char		*solution;
	char		**tetriminos;

	if (ac != 2)
	{
		ft_putstr("usage : ./fillit <File_name>\n \
	Use only one to run fillit\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (ac != 2 || fd < 0)
		error();
	tetriminos = read_file(fd);
	close(fd);
	if (!tetriminos)
		error();
	set_color(tetriminos);
	if ((solution = solver(tetriminos)) == NULL)
		error();
	ft_putstr(solution);
	free(solution);
	free(tetriminos);
	return (0);
}
