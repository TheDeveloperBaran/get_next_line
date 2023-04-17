/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakilic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:34:34 by bakilic           #+#    #+#             */
/*   Updated: 2023/02/16 16:34:39 by bakilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(char *str, int fd)
{
	char	*buf;
	int		readline;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	readline = 1;
	while (ft_check_nl(str))
	{
		readline = read(fd, buf, BUFFER_SIZE);
		if (!readline)
			break ;
		if (readline == -1)
		{
			free(buf);
			free(str);
			return (NULL);
		}
		buf[readline] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*main_str;
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	main_str = ft_read(main_str, fd);
	if (main_str == NULL)
		return (NULL);
	str = ft_one_line(main_str);
	main_str = ft_after_line(main_str);
	return (str);
}
