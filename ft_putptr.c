/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:03:11 by jpes              #+#    #+#             */
/*   Updated: 2023/05/09 13:11:08 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int   ft_putptr(void* ptr)
{
   unsigned long  n;
   int   i;
   int   digit;
   int length;
   char buffer[16];
   
   n = (unsigned long)ptr;
   i = 0;
   length = 0;
   if (n == 0)
   {
      ft_putstr("0x0");
      return (3);
   }
   digit = 0;
   buffer[i] = '0';
   i = 15;
   while (n > 0)
   {
      digit = n % 16;
      if (digit < 10)
         buffer[i] = '0' + digit;
      else
         buffer[i] = 'a' + digit - 10;
      i --;
      n /= 16;
      length ++;
   }
   ft_putstr("0x");
   ft_putstr(buffer + i + 1);
   return(length + 2);
}