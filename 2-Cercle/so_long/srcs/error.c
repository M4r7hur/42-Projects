/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:26:12 by armendes          #+#    #+#             */
/*   Updated: 2022/01/10 16:44:42 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error(t_win *win, char *err_msg)
{
	(void)win;
	printf("Error : %s", err_msg);
	exit(EXIT_FAILURE);
}
