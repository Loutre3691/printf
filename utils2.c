/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:27:43 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/19 15:31:05 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexa(unsigned long n, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_printf_hexa(n / 16, uppercase);
	}
	count += ft_printf_char(base[n % 16]);
	return (count);
}

int	ft_printf_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		count += ft_printf_char('0' + n);
	else
	{
		count += ft_printf_unsigned(n / 10);
		count += ft_printf_unsigned(n % 10);
	}
	return (count);
}
