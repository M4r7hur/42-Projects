/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 14:20:05 by armendes          #+#    #+#             */
/*   Updated: 2020/12/25 22:27:38 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				check_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;
	int		len;

	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1) - 1;
	while (len > 0 && check_set(set, s1[len]))
		len--;
	while (s1[i] && check_set(set, s1[i]))
		i++;
	if (len - i > 0)
	{
		if (!(result = malloc(sizeof(char) * (len - i + 2))))
			return (NULL);
		j = 0;
		while ((len - i + 1) > 0)
			result[j++] = s1[i++];
		result[j] = '\0';
	}
	else if (!(result = malloc(sizeof(char))))
		return (NULL);
	return (result);
}
