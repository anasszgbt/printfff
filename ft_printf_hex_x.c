/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:53:59 by azghibat          #+#    #+#             */
/*   Updated: 2024/12/19 16:34:25 by azghibat         ###   ########.fr       */
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

static void	ft_putnbr_hex(unsigned int num, int upper)
{
	char	*my_hexa;

	if (upper)
		my_hexa = "0123456789ABCDEF";
	else
		my_hexa = "0123456789abcdef";
	if (num >= 16)
		ft_putnbr_hex(num / 16, upper);
	write(1, &my_hexa[num % 16], 1);
}

int	handle_hex_upper(unsigned int num, int upper)
{
	int	len;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len = ft_lencounter(num);
	ft_putnbr_hex(num, upper);
	return (len);
}
