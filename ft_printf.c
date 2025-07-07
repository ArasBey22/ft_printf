/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:24:15 by haras             #+#    #+#             */
/*   Updated: 2025/07/07 19:10:48 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	val_typ(const char s, va_list arg)
{
	if (s == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (s == 'u')
    	return ft_putnbr_u(va_arg(arg, unsigned int));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	arg;

	va_start(arg, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			if (*++s == '%')
				count += ft_putchar('%');
			else	
				count += val_typ(*s, arg);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(arg);
	if (count < 0)
		return (-1);
	return (count);
}
