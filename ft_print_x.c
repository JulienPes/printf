/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:28:26 by jpes              #+#    #+#             */
/*   Updated: 2023/05/10 17:49:46 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   ft_print_x(unsigned int nb, int length)
{
   int   i;
   int   digit;
   char buffer[16];
   
   i = 0;
   if (nb == 0)
      ft_zero_case();
   digit = 0;
   buffer[i] = '0';
   i = 15;
   while (nb > 0)
   {
      digit = nb % 16;
      if (digit < 10)
         buffer[i] = '0' + digit;
      else
         buffer[i] = 'a' + digit - 10;
      i --;
      nb /= 16;
      length ++;
   }
   ft_print_s(buffer + i + 1);
   return(length + 2);
}