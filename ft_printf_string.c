/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:47:25 by azghibat          #+#    #+#             */
/*   Updated: 2024/12/19 16:35:11 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string(char *str)
{
	if (str == NULL)
		str = "(null)";
	return (write(1, str, ft_strlen(str)));
}
