/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:10:49 by jpes              #+#    #+#             */
/*   Updated: 2023/05/11 11:42:23 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
   va_list args;
   int i;
   int length;

   va_start(args, format);
   i = 0;
   length = 0;
   while(format[i])
   {
      if(format[i] == '%')
      {
         length += ft_formats(args, format[i + 1]);
         i ++;
      }
      else
      {
         length += ft_print_c(format[i]);
      }
      i ++;
   }
   va_end(args);
   return (length);
}

// int main(int argc, char const *argv[])
// {
//    ft_printf("Le miens -> NULL %s NULL \n", NULL);
//    printf("Le bon -> NULL %s NULL \n", NULL);
//    return 0;
// }
