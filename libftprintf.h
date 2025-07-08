/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haras <haras@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:58:14 by haras             #+#    #+#             */
/*   Updated: 2025/07/08 15:07:56 by haras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define HEX_U "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_printf(const char *s, ...);
int	ft_putnbr_u(unsigned int n);
int	ft_val_typ(const char s, va_list arg);
int	ft_putptr(void *arg, char *base);
int	ft_puthexadec(unsigned int n, char *val_typ);
int	ft_base(unsigned long n, char *base);

#endif