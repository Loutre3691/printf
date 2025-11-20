/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:27:23 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/19 16:03:10 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(unsigned int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_str(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		count++;
		i++;
	}
	return (count);
}

int	ft_printf_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count = count + ft_printf_char('-');
		n *= -1;
	}
	if (n < 10)
		count += ft_printf_char('0' + n);
	else
	{
		count += ft_printf_putnbr(n / 10);
		count += ft_printf_putnbr(n % 10);
	}
	return (count);
}

int	ft_printf_point(void *ptr)
{
	int				count;
	unsigned long	p;

	p = (unsigned long)ptr;
	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += (write(1, "0x", 2));
	count += ft_printf_hexa(p, 0);
	return (count);
}
