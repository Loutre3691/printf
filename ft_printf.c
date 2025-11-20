/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:18:50 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/19 15:39:33 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(va_list arg, char c)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(arg, unsigned int)));
	if (c == 's')
		return (ft_printf_str(va_arg(arg, char *)));
	if (c == 'p')
		return (ft_printf_point(va_arg(arg, void *)));
	if (c == 'i' || c == 'd')
		return (ft_printf_putnbr(va_arg(arg, int)));
	if (c == 'u')
		return (ft_printf_unsigned(va_arg(arg, unsigned int)));
	if (c == 'x')
		return (ft_printf_hexa(va_arg(arg, unsigned int), 0));
	if (c == 'X')
		return (ft_printf_hexa(va_arg(arg, unsigned int), 1));
	if (c == '%')
		return (ft_printf_char('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(arg, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_conversion(arg, str[i + 1]);
			i += 2;
		}
		else
		{
			ft_printf_char(str[i]);
			count++;
			i++;
		}
	}
	va_end(arg);
	return (count);
}
