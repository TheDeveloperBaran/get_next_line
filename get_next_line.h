/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakilic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:35:21 by bakilic           #+#    #+#             */
/*   Updated: 2023/02/16 16:35:22 by bakilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_read(char *str, int fd);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *str, char *buf);
int		ft_check_nl(char *str);
char	*ft_one_line(char *str);
char	*ft_after_line(char *str);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif
#endif
