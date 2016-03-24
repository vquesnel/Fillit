/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 13:22:30 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/24 12:06:19 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <sys/uio.h>
# include <fcntl.h>
# include <sys/types.h>
# define BUFF_SIZE 24
# define MAX_FILES 256

int		get_next_line(int fd, char **line);

#endif
