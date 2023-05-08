/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:11:01 by jpes              #+#    #+#             */
/*   Updated: 2023/05/08 18:11:05 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar(va_arg(args, int));
	// else if (format == 's')
	// 	print_length += ft_printstr(va_arg(args, char *));
	// else if (format == 'p')
	// 	print_length += ft_print_ptr(va_arg(args, unsigned long long));
	// else if (format == 'd' || format == 'i')
	// 	print_length += ft_printnbr(va_arg(args, int));
	// else if (format == 'u')
	// 	print_length += ft_print_unsigned(va_arg(args, unsigned int));
	// else if (format == 'x' || format == 'X')
	// 	print_length += ft_print_hex(va_arg(args, unsigned int), format);
	// else if (format == '%')
	// 	print_length += ft_printpercent();
	return (print_length);
}