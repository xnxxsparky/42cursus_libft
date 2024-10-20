/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcausseq <bcausseq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:31:09 by bcausseq          #+#    #+#             */
/*   Updated: 2024/10/11 00:00:27 by bcausseq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			if (n < 0)
			{
				ft_putchar_fd('-', fd);
				n = -n;
			}
			if (n > 9)
			{
				ft_putnbr_fd(n / 10, fd);
				ft_putchar_fd(n % 10 + '0', fd);
			}
			else
				ft_putchar_fd(n % 10 + '0', fd);
		}
	}
}
