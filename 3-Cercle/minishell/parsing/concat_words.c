/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concat_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:20:36 by armendes          #+#    #+#             */
/*   Updated: 2022/04/04 17:04:20 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	concat_words_prev_two(t_token **tmp)
{
	t_token	*tmp_next;
	char	*new_word;

	tmp_next = (*tmp)->next;
	new_word = ft_strjoin((*tmp)->word, (*tmp)->next->word);
	free((*tmp)->word);
	(*tmp)->word = new_word;
	if ((*tmp)->word == NULL)
		return (-1);
	(*tmp)->type = (*tmp)->next->type;
	if ((*tmp)->next->next == NULL)
		(*tmp)->next = NULL;
	else
	{
		(*tmp)->next->next->prev = *tmp;
		(*tmp)->next = (*tmp)->next->next;
	}
	(*tmp)->need_to_concat = 0;
	free(tmp_next->word);
	free(tmp_next);
}

int	concat_words_prev(t_token **words)
{
	t_token	*tmp;
	t_token	*tmp_next;
	char	*new_word;

	tmp = last_cell(words);
	while (tmp)
	{
		if (tmp->need_to_concat == 1)
			concat_words_prev_two(&tmp);
		tmp = tmp->prev;
	}
	return (0);
}

static void	reequilibrate_concat(t_token **words)
{
	t_token	*tmp;

	tmp = *words;
	while (tmp->next)
	{
		if ((tmp->next->type == RED_IN || tmp->next->type == HERE_DOC
				|| tmp->next->type == RED_OUT
				|| tmp->next->type == RED_OUT_APPEND)
			&& tmp->need_to_concat == 1)
			tmp->need_to_concat = 0;
		if ((tmp->type == RED_IN || tmp->type == HERE_DOC
				|| tmp->type == RED_OUT
				|| tmp->type == RED_OUT_APPEND)
			&& tmp->need_to_concat == 1)
			tmp->need_to_concat = 0;
		if (tmp->type == JUST_DOLLAR && search_space_end(tmp->word)
			&& tmp->need_to_concat == 1)
			tmp->need_to_concat = 0;
		tmp = tmp->next;
	}
}

void	detect_concat(t_token **words)
{
	t_token	*tmp;

	tmp = *words;
	while (tmp->next)
	{
		if (tmp->type != ARG || tmp->next->type != ARG)
		{
			if (tmp->type == ARG && search_space_end(tmp->word) == 0)
					tmp->need_to_concat = 1;
			else if (tmp->next->type == ARG)
			{
				if (search_space_start(tmp->next->word) == 0)
					tmp->need_to_concat = 1;
			}
			else
			{
				if (!is_empty(tmp->next->word))
					tmp->need_to_concat = 1;
			}
		}
		tmp = tmp->next;
	}
	reequilibrate_concat(words);
}
