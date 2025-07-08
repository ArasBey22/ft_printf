/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_val_typ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:35:15 by haras             #+#    #+#             */
/*   Updated: 2025/07/08 14:40:11 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_val_typ(const char s, va_list arg)
{
	if (s == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (s == 'u')
		return (ft_putnbr_u(va_arg(arg, unsigned int)));
	else if (s == 'p')
		return (ft_putptr(va_arg(arg, void *), HEX_L));
	else if (s == 'x')
		return (ft_puthexadec(va_arg(arg, unsigned int), HEX_L));
	else if (s == 'X')
		return (ft_puthexadec(va_arg(arg, unsigned int), HEX_U));
	return (0);
}
