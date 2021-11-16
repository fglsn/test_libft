/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:58:36 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/12 13:50:50 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char del)
{
	size_t	i;
	size_t	word;
	size_t	word_count;

	i = 0;
	word = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != del)
		{
			word++;
			if (word == 1)
			{
				word_count++;
			}
		}
		else
			word = 0;
		i++;
	}
	return (word_count);
}

static size_t	ft_word_length(char const *s, char del)
{
	size_t	len;

	len = 0;
	while (*s++ && *s != del)
	{
		len++;
	}
	return (len);
}

char	*ft_split(char *s, char c)
{
	char *result;

	result = NULL;
	while (*s && *s == c)
		s++;
	if (!(ft_word_length(s, c)))
		return (result);
	result = malloc(sizeof(char *) * (ft_word_length(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s && *s != c)
	{
		result = s++;
	}
	return (result);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**result;

	result = NULL;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s++)
	{
		*result = ft_split((char *)s, c);
		result++;
	}
	*result = 0;
	return (result);
}
