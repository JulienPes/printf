/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:03:11 by jpes              #+#    #+#             */
/*   Updated: 2023/05/11 14:39:12 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   ft_print_p(unsigned long ptr)
{
   char *base_16;
   int   i;

   base_16 = "0123456789abcdef";
   i = 0;
   
   if (ptr >= 16)
   {
      i = ft_print_p(ptr / 16);
      ft_print_c(base_16[ptr % 16]);
   }
   else
   {
      ft_print_c(base_16[ptr % 16]);
   }
   return(i + 1);
}