/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:56:32 by azghibat          #+#    #+#             */
/*   Updated: 2024/12/19 16:35:26 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_unsigned_int(unsigned int num)
{
	int	len;

	len = 0;
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
	{
		if (num >= 10)
			len += handle_unsigned_int(num / 10);
		ft_putchar(num % 10 + '0');
		len++;
	}
	return (len);
}
