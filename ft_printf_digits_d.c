/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_digits_d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:50:37 by azghibat          #+#    #+#             */
/*   Updated: 2024/12/19 16:33:56 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_digits_int(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (n < 0)
		len++;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	ft_putnbr(n);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
