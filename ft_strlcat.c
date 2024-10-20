/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:29:58 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/20 21:54:59 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	s_len;
	size_t	d_len;

	if (!src)
		return (0);
	if (sz == 0 && !dst)
		return (ft_strlen(src));
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (d_len >= sz)
		return (sz + s_len);
	if (s_len < sz - d_len)
		ft_memcpy(dst + d_len, src, s_len + 1);
	else
	{
		ft_memcpy(dst + d_len, src, sz - d_len - 1);
		dst[sz - 1] = '\0';
	}
	return (d_len + s_len);
}
