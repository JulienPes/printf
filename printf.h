/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:10:21 by jpes              #+#    #+#             */
/*   Updated: 2023/05/09 13:37:20 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_formats(va_list args, const char format);
int	ft_putnbr(int n, int length);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int   ft_putptr(void* ptr);



#endif