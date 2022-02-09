/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_cmd_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:14:01 by armendes          #+#    #+#             */
/*   Updated: 2022/02/09 18:19:25 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static t_cmd	*create_elem(char *line, int start, int end)
{
	t_cmd	*elem;
	char	*str;

	elem = malloc(sizeof(t_cmd));
	if (!elem)
		return (NULL);
	elem->next = NULL;
	elem->words = NULL;
	str = format_str(line, start, end);
	if (!str)
		return (NULL);
	elem->cmd = ft_strdup(str);
	if (elem->cmd == NULL)
		return (NULL);
	return (elem);
}

int	add_cmd(t_cmd **cmd, int start, int end, char *line)
{
	t_cmd	*elem;
	t_cmd	*tmp;

	if (cmd == NULL)
		return (-1);
	elem = create_elem(line, start, end);
	if (!elem)
		return (-1);
	if (*cmd == NULL)
		*cmd = elem;
	else
	{
		tmp = *cmd;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = elem;
	}
	return (0);
}