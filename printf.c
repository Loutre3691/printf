/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:18:50 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/14 16:17:27 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

 /*

		void va_start(va_list ap, last);
		type va_arg(va_list ap, type);
    	void va_end(va_list ap);
       	void va_copy(va_list dest, va_list src);

		cspdiuxX%
	   
*/
creer une fonction qui gere tous ca :

	c ->  char
	s -> string
	p -> pointeur
	d et i -> int
	u -> unsigned int
	x -> int en hexadecimal (ff)
	X -> INT EN HEXA (FF) maj
	%% -> un signe %


int	ft_printf(const char *c, ...)
{
	FONCTION QUI PERMET DE SAVOIR SIL Y A UN % 
	le gerer et envoyer dans fonction pour gerer chaque type
	va_start	
	if (c == %)
	
	return (count)
}

	