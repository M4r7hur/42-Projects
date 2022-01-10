/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 00:36:33 by armendes          #+#    #+#             */
/*   Updated: 2022/01/10 19:10:59 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*tmp;
	t_list	*elem;
	t_list	*begin;

	tmp = lst;
	if (lst == NULL)
		return (NULL);
	elem = ft_lstnew((*f)(tmp->content));
	if (elem == NULL)
		return (NULL);
	begin = elem;
	while (tmp->next)
	{
		tmp = tmp->next;
		elem = ft_lstnew((*f)(tmp->content));
		if (elem == NULL)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		ft_lstadd_back(&begin, elem);
	}
	return (begin);
}
