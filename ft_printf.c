/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:24:15 by haras             #+#    #+#             */
/*   Updated: 2025/07/08 12:56:09 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
				count += ft_val_typ(*s, arg);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(arg);
	return (count);
}
