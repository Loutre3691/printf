/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:40:04 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/19 15:42:11 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_printf_char(unsigned int c);
int	ft_printf_str(char *str);
int	ft_printf_putnbr(int n);
int	ft_printf_hexa(unsigned long n, int uppercase);
int	ft_printf_unsigned(unsigned int n);
int	ft_printf_point(void *ptr);

#endif
