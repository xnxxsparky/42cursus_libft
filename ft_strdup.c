/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:45:59 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/20 21:53:23 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ret;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	ret = (char *)malloc(i * sizeof(char) + 1);
	if (!ret)
		return (NULL);
	return (ft_strcpy(ret, s));
}
