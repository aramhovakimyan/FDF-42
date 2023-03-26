/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:35:36 by ahovakim          #+#    #+#             */
/*   Updated: 2023/03/22 17:35:42 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_check(const char *str, va_list arg);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
int		ft_putnbr_u(unsigned int n);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_hex(unsigned long long n, short x);
int		ft_ptr(unsigned long long n);

#endif