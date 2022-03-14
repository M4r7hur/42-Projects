/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:42:13 by armendes          #+#    #+#             */
/*   Updated: 2022/03/10 20:12:02 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	builtin_echo(char **args)
{
	int	i;
	int	new_line;

	i = 1;
	new_line = 0;
	if (args[1] == "-n")
		new_line = 1;
	while (args[i])
	{
		write(0, args[i], ft_strlen(args[i]));
		i++;
	}
	if (new_line == 0)
		write(0, "\n", 1);
}