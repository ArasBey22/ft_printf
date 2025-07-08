/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 19:36:35 by haras             #+#    #+#             */
/*   Updated: 2025/07/08 15:06:17 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(void *arg, char *base)
{
	unsigned long	adress;
	int				count;

	if (arg == NULL)
		return (write(1, "(nil)", 5));
	adress = (unsigned long)arg;
	count = 0;
	count += ft_putstr("0x");
	count += ft_base(adress, base);
	return (count);
}
