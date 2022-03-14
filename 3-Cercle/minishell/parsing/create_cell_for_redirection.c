/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_cell_for_redirection.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:45:35 by armendes          #+#    #+#             */
/*   Updated: 2022/02/15 19:48:47 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	cut_redirection_first_cell(t_token **words, t_token **tmp, char *sign,
	e_type type)
{
	t_token	*new;

	new = create_word(sign, type);
	if (!new)
		return (-1);
	new->next = *tmp;
	if ((*tmp)->prev == NULL)
		*words = new;
	else
	{
		new->prev = (*tmp)->prev;
		(*tmp)->prev->next = new;
	}
	(*tmp)->prev = new;
	return (0);
}

int	cut_redirection_other_cell(t_token **words, t_token **tmp, char *sign,
	e_type type)
{
	t_token	*new;
	t_token	*prev;

	new = create_word(sign, type);
	if (!new)
		return (-1);
	prev = create_word(before_redirection((*tmp)->word), (*tmp)->type);
	if (!prev)
		return (-1);
	prev->next = new;
	new->prev = prev;
	new->next = *tmp;
	if ((*tmp)->prev == NULL)
		*words = prev;
	else
	{
		(*tmp)->prev->next = prev;
		prev->prev = (*tmp)->prev;
	}
	(*tmp)->prev = new;
	(*tmp)->word = after_redirection((*tmp)->word);
	return (0);
}