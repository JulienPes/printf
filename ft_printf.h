/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:10:21 by jpes              #+#    #+#             */
/*   Updated: 2023/05/11 14:33:51 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_formats(va_list args, const char format);
int	ft_print_d_i(int n, int length);
int	ft_print_u(unsigned int n, int length);
int   ft_print_up_x(unsigned int ptr);
int   ft_print_x(unsigned int ptr);
int	ft_print_c(int c);
int	ft_print_s(char *s);
int   ft_print_p(unsigned long ptr);
int   ft_print_percent();
int   ft_zero_case();



#endif