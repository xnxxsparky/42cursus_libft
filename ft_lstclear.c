/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:49:35 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/20 21:19:38 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*cur;

	if (lst && del)
	{
		cur = *lst;
		while (cur)
		{
			temp = cur->next;
			ft_lstdelone(cur, del);
			cur = temp;
		}
		*lst = NULL;
	}
}
