/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:55:35 by jpes              #+#    #+#             */
/*   Updated: 2023/05/05 18:32:03 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_printf(const char *strformat, ...)
{
   va_list args;
   int i;
   va_start(args, strformat);
   i = 0;
   while(strformat[i] != '\0')
   {
      if(strformat[i] == '%')
      {
         i ++;
         switch (strformat[i])
         {
            int n;
            char c;
            char *s;
            void *ptr;
            case 'i':
               n = va_arg(args, int);
               ft_putnbr_fd(n, 1);
               break;
            case 'c':
               c = va_arg(args, int);
               ft_putchar_fd(c, 1);
               break;
            case 's':
               s = va_arg(args, char*);
               ft_putstr_fd(s, 1);
               break;
            case 'p':
               ptr = va_arg(args, void *);
               ft_putptr(ptr);
               break;     
         }
      }
      else
         ft_putchar_fd(strformat[i], 1);
         i ++;
   }
}

int main(int argc, char const *argv[])
{
   ft_printf("%s  %d \n", "aysytwsw"    "hhdjk");
   printf("%s  %d \n", "aysytwsw 9   hhdjk");
   //printf("%s\n", ft_printf("%s\n", "aysytwsw"));
   //ft_printf("%s\n", printf("%s\n", "aysytwsw"));
   return 0;
}
