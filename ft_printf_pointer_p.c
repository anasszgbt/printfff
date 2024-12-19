/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer_p.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:57:50 by azghibat          #+#    #+#             */
/*   Updated: 2024/12/19 16:34:59 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lencounter(unsigned long num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

void	ft_convert_ptr(unsigned long adr, int len)
{
	char	*base;
	char	buffer[17];
	int		idx;

	if (!adr)
	{
		write(1, "0x0", 3);
		return ;
	}
	write(1, "0x", 2);
	base = "0123456789abcdef";
	idx = len;
	buffer[idx] = '\0';
	while (idx > 0)
	{
		buffer[--idx] = base[adr % 16];
		adr /= 16;
	}
	write(1, buffer, len);
}

int	handle_pointer(unsigned long ptr)
{
	int				len;
	unsigned long	adr;

	if (!ptr)
		return (write(1, "0x0", 3));
	adr = (unsigned long)ptr;
	len = ft_lencounter(adr);
	ft_convert_ptr(adr, len);
	return (len + 2);
}
