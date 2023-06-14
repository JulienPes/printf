/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:11:01 by jpes              #+#    #+#             */
/*   Updated: 2023/05/12 12:00:41 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
			print_length += ft_print_c(va_arg(args, int));
	else if (format == 's')
		print_length += ft_print_s(va_arg(args, char *));
	else if (format == 'p')
	{
		print_length += ft_print_s("0x");
		print_length += ft_print_p(va_arg(args, unsigned long int));
	}
	else if (format == 'd' || format == 'i')
		print_length += ft_print_d_i(va_arg(args, int), print_length);
	else if (format == 'u')
		print_length += ft_print_u(va_arg(args, unsigned int), print_length);
	else if (format == 'x')
		print_length += ft_print_x(va_arg(args, unsigned int));
	else if (format == 'X')
		print_length += ft_print_up_x(va_arg(args, unsigned int));
	else if (format == '%')
		print_length += ft_print_percent();
	return (print_length);
}
