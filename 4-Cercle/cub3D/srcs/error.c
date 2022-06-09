/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:19:17 by armendes          #+#    #+#             */
/*   Updated: 2022/06/09 19:26:31 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

static void	free_sprites(t_sprite **sprite, t_win *win)
{
	int		text;
	int		min;

	min = -1;
	text = 3;
	while (++min < text)
	{
		mlx_destroy_image(win->mlx_ptr, sprite[min]->img);
		free(sprite[min]);
	}
	free(sprite);
}

static void	free_map(t_win *win)
{
	char	**tmp;
	int		i;

	tmp = win->map->map;
	i = 0;
	if (win->map->map)
	{
		while (i < win->map->height)
		{
			if (win->map->map[i])
				free(tmp[i]);
			i++;
		}
		free(win->map->map);
	}
	free(win->map);
}

void	free_all(t_win *win)
{
	if (win)
	{
		if (win->map)
			free_map(win);
		if (win->sprites)
			free_sprites(win->sprites, win);
		if (win->img)
		{
			mlx_destroy_image(win->mlx_ptr, win->img->img);
			free(win->img);
		}
		if (win->player)
			free(win->player);
		if (win->key)
			free(win->key);
		if (win->win_ptr)
			mlx_destroy_window(win->mlx_ptr, win->win_ptr);
		if (win->mlx_ptr)
		{
			mlx_destroy_display(win->mlx_ptr);
			free(win->mlx_ptr);
		}
		free(win);
	}
}

void	error(t_win *win, char *err_msg)
{
	free_all(win);
	printf("Error : %s", err_msg);
	exit(EXIT_FAILURE);
}
