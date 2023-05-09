/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:10:36 by jpes              #+#    #+#             */
/*   Updated: 2023/05/09 14:24:55 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n, int length)
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
		ft_putchar(n + 48);
	}
	else
	{
		length += ft_putnbr(n / 10, length);
		ft_putnbr(n % 10, length);
	}
	return (length);
}
