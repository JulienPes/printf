/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:10:49 by jpes              #+#    #+#             */
/*   Updated: 2023/05/09 14:22:19 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
         length += ft_putchar(format[i]);
      }
      i ++;
   }
   va_end(args);
   return (length);
}

int main(int argc, char const *argv[])
{
   ft_printf("le miens ->%d \n", -10);
   //printf("le vrai -> %d \n", 100);
   //printf("%s\n", ft_printf("%s\n", "aysytwsw"));
   //ft_printf("%s\n", printf("%s\n", "aysytwsw"));
   return 0;
}
