/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armendes <armendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:10:27 by armendes          #+#    #+#             */
/*   Updated: 2022/03/28 18:34:16 by armendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**copy_env(char **envp)
{
	int		i;
	char	**env;

	i = 0;
	while (envp[i])
		i++;
	env = malloc(sizeof(char *) * (i + 1));
	if (!env)
		return (NULL);
	i = 0;
	while (envp[i])
	{
		env[i] = ft_strdup(envp[i]);
		i++;
	}
	env[i] = NULL;
	return (env);
}

char	*ft_getenv_var(char *str)
{
	int		i;
	char	*env_var;

	i = 0;
	while (str[i] && str[i] != '=')
		i++;
	env_var = ft_strdup_size(str, i);
	if (!env_var)
		return (NULL);
	return (env_var);
}

int	ft_len_env(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		i++;
	}
	i++;
	return (i);
}

char	*ft_getenv(char *var, char **env)
{
	int		i;
	int		j;
	char	*env_var;

	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && env[i][j] != '=')
			j++;
		env_var = ft_strdup_size(env[i], j);
		if (!env_var)
			return (NULL);
		if (ft_strncmp(var, env_var, 500) == 0)
		{
			free(env_var);
			env_var = ft_strdup_size(&env[i][j + 1], 500);
			if (!env_var)
				return (NULL);
			return (env_var);
		}
		free(env_var);
		i++;
	}
	return (NULL);
}
