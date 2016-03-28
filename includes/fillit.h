/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:54:17 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/28 20:17:10 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

/*
** T E S T S
*/

int	ft_4(char *map);
int	ft_count_tetriminos(char *s);
int		ft_get_char(char *map);
int		ft_get_size(char *map);
int	ft_is_o(char *map, char c);
int	ft_is_i(char *map, char c);
int	ft_is_z(char *map, char c);
int	ft_is_s(char *map, char c);
int	ft_is_t(char *map, char c);
int	ft_is_l(char *map, char c);
int	ft_is_j(char *map, char c);
int	*ft_is_forms_4(char *map, char c);
int	ft_add_tab(int *map);

/*
** T O O L S
*/

int	ft_tablen(char **buffer);
char	**read_file(int fd);
void	set_color(char **tetriminos);

/*
** S O L V E R
*/

void	init_solution(char *solution, int j);
char	*solver(char **tetriminos);
void	error(void);

/*
** TETRIMINOS_HANDLING
*/

void	reset_tetriminos(char *tetriminos);
void	reset_all_tetriminos(char **tetriminos);
int		set_tetriminos(char *tetriminos, int i, char *solution, int j);

#endif
