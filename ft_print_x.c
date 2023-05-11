/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:28:26 by jpes              #+#    #+#             */
/*   Updated: 2023/05/11 14:41:25 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   ft_print_x(unsigned int ptr)
{
   char *base_16_min;
   int   i;

   base_16_min = "0123456789abcdef";
   i = 0;
   
   if (ptr < 0)
      return (0);
   if (ptr >= 16)
   {
      i = ft_print_p(ptr / 16);
      ft_print_c(base_16_min[ptr % 16]);
   }
   else
   {
      ft_print_c(base_16_min[ptr % 16]);
   }
   return(i + 1);
}