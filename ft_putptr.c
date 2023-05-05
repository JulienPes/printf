/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:03:11 by jpes              #+#    #+#             */
/*   Updated: 2023/05/05 15:06:08 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putptr(void* ptr)
{
   unsigned long  n;
   int   i;
   int   digit;
   char buffer[16];
   
   n = (unsigned long)ptr;
   i = 0;
   digit = 0;
   buffer[i] = '0';
   i = 15;
   while (n > 0)
   {
      digit = n % 16;
      if (digit < 10)
         buffer[i] = '0' + digit;
      else
      {
         buffer[i] = 'a' + digit - 10;
      }
      i --;
      n /= 16;
   }
   ft_putstr_fd("0x", 1);
   ft_putstr_fd(buffer + i + 1, 1);
}