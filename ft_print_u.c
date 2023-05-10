/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:48:51 by jpes              #+#    #+#             */
/*   Updated: 2023/05/10 17:49:35 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n, int length)
{
	length = 1;
	if (n == 4294967295)
	{
		write(1, "4294967295", 10);
		return (10);
	}
	if (n < 0)
	{
      n = 4294967295 - n;
      length += ft_print_u(n % 10, length);
	}
	if (n <= 9)
	{
		ft_print_c(n + 48);
	}
	else
	{
		length += ft_print_u(n / 10, length);
		ft_print_u(n % 10, length);
	}
	return (length);
}