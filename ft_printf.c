/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:10:49 by jpes              #+#    #+#             */
/*   Updated: 2023/05/10 18:22:02 by jpes             ###   ########.fr       */
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
//    ft_printf(" NULL %s NULL ", NULL);
//    printf(" NULL %s NULL ", NULL);
//    return 0;
// }
