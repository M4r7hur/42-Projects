/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:50:00 by armendes          #+#    #+#             */
/*   Updated: 2022/03/22 15:40:02 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	builtin_pwd(void)
{
	char	*buff;

	buff = getcwd(NULL, 0);
	if (buff == NULL)
		return (-1);
	ft_putstr_fd(buff, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (0);
}
