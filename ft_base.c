/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 13:58:18 by haras             #+#    #+#             */
/*   Updated: 2025/07/08 13:58:37 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_base(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_base(n / 16, base);
	count += ft_putchar(base[n % 16]);
	return (count);
}
