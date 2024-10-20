/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:24:10 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/16 04:35:31 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_char(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (i[set])
	{
		if (i[set] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	end = ft_strlen(s1) - 1;
	while (get_char(beg[s1], set))
		beg++;
	if (beg >= end)
		return (ft_strdup(""));
	while (get_char(end[s1], set))
		end--;
	return (ft_substr(s1, beg, end - beg + 1));
}
