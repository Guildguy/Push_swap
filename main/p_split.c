/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:01:04 by fleite-j          #+#    #+#             */
/*   Updated: 2025/02/25 18:01:05 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_word(char *str, char separator)
{
	int		i;
	int		count;
	bool	inside_word;

	i = 0;
	count = 0;
	while (str[i])
	{
		inside_word = false;
		while (str[i] == separator && str[i])
			++i;
		while (str[i] != separator && str[i])
		{
			if (!inside_word)
			{
				++count;
				inside_word = true;
			}
			++i;
		}
	}
	return (count);
}

static char	*get_next_word(char *str, char separator)
{
	static int	cursor;
	char		*next_str;
	int			len;
	int			i;

	i = 0;
	len = 0;
	cursor = 0;
	while (str[cursor] == separator)
		++cursor;
	while ((str[cursor + len] != separator) && str[cursor + len])
		++len;
	next_str = malloc((size_t)len * sizeof(char) + 1);
	if (next_str == NULL)
		return (NULL);
	while (str[cursor] != separator && str[cursor])
		next_str[i++] = str[cursor++];
	next_str[i] = '\0';
	return (next_str);
}

void	free_matrix(char *av[])
{
	int	i;

	i = -1;
	if (av == NULL || *av == NULL)
		return ;
	while (av[i])
		free (av[i++]);
	free(av);
}

char	**push_split(char *str, char separator)
{
	int		i;
	int		word_nbr;
	char	**vector_str;

	i = 0;
	word_nbr = count_word(str, separator);
	if (word_nbr)
		exit(1);
	vector_str = malloc(sizeof(char *) * (size_t)(word_nbr + 2));
	if (vector_str == NULL)
		return (NULL);
	while (word_nbr-- >= 0)
	{
		if (i == 0)
		{
			vector_str[i] = malloc(sizeof(char));
			if (vector_str[i] == NULL)
				return (NULL);
			vector_str[i++][0] = '\0';
			continue ;
		}
		vector_str[i++] = get_next_word(str, separator);
	}
	vector_str[i] = NULL;
	return (vector_str);
}
