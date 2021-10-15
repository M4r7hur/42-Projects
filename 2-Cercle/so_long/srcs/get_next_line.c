/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:19:54 by armendes          #+#    #+#             */
/*   Updated: 2021/10/15 18:45:20 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	*after_return(char *save)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	if (!save)
		return (0);
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (0);
	}
	tmp = malloc(sizeof(char) * ((ft_strlen(save) - i) + 1));
	if (!tmp)
		return (0);
	i++;
	while (save[i])
		tmp[j++] = save[i++];
	tmp[j] = '\0';
	free(save);
	return (tmp);
}

char	*before_return(char *save)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!save)
		return (0);
	while (save[i] && save[i] != '\n')
		i++;
	tmp = malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (0);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		tmp[i] = save[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int	get_next_line(int fd, char **line)
{
	char		*buff;
	static char	*save[256];
	int			bytes_read;

	bytes_read = 1;
	if (fd < 0 || !line)
		return (-1);
	buff = malloc(sizeof(char) * 128);
	if (!buff)
		return (-1);
	while (!has_return(save[fd]) && bytes_read != 0)
	{
		bytes_read = read(fd, buff, 128);
		if (bytes_read == -1)
		{
			free(buff);
			return (-1);
		}
		buff[bytes_read] = '\0';
		save[fd] = ft_strjoin(save[fd], buff);
	}
	free(buff);
	*line = before_return(save[fd]);
	save[fd] = after_return(save[fd]);
	if (bytes_read == 0)
		return (0);
	return (1);
}
