/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:03:11 by jpes              #+#    #+#             */
/*   Updated: 2023/05/12 13:13:10 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long ptr)
{
	char	*base_16_p;
	int		i;

	base_16_p = "0123456789abcdef";
	i = 0;
	if (ptr >= 16)
	{
		i = ft_print_p(ptr / 16);
		ft_print_c(base_16_p[ptr % 16]);
	}
	else
	{
		ft_print_c(base_16_p[ptr % 16]);
	}
	return (i + 1);
}
