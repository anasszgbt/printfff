/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:30:21 by azghibat          #+#    #+#             */
/*   Updated: 2024/12/19 16:29:20 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *form, ...);
int		ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int n);
int		handle_form(const char **form, va_list args);
int		handle_string(char *str);
int		handle_digits_int(int n);
int		handle_hex_upper(unsigned int num, int upper);
int		handle_unsigned_int(unsigned int num);
int		handle_pointer(unsigned long ptr);
int		handle_perc(void);

#endif