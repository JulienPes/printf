/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:10:36 by jpes              #+#    #+#             */
/*   Updated: 2023/05/10 17:49:01 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d_i(int n, int length)
{
	length = 1;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		length += write(1, "-", 1);
		n = n * (-1);
	}
	if (n <= 9)
	{
		ft_print_c(n + 48);
	}
	else
	{
		length += ft_print_d_i(n / 10, length);
		ft_print_d_i(n % 10, length);
	}
	return (length);
}
