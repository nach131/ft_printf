/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:54:54 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/10 23:54:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

void ft_search_bonus(va_list arg, const char *format, t_print *tp)
{
	if (*format == '0')
	{
		tp->flag_zero = 1;
		ft_iszero_bonus(tp, arg);
		// ft_read_text(tp, arg);
	}
	else if (*format >= '1' && *format <= '9')
	{
		// ft_iszero_bonus(tp, arg);
		write(1, "es numero", 9);
	}
	else if (*format == '-')
	{
		write(1, "es -", 3);
	}
	else if (*format == '.')
	{
		write(1, "es .", 3);
	}
	else if (*format == '#')
	{
		write(1, "es #", 3);
	}
	else if (*format == '+')
	{
		write(1, "es +", 3);
	}
	else if (*format == ' ')
	{
		write(1, "es ", 3);
	}
	// tp->format++;
}