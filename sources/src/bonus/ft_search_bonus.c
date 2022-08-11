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

void ft_search_bonus(t_print *tp, va_list arg)
{
	if (*tp->format == '0')
	{
		tp->flag_zero = 1;
		ft_iszero_bonus(tp, arg);
		// ft_read_text(tp, arg);
	}
	else if (*tp->format >= '1' && *tp->format <= '9')
	{
		// ft_iszero_bonus(tp, arg);
		write(1, "es numero", 9);
	}
	else if (*tp->format == '-')
	{
		write(1, "es -", 3);
	}
	else if (*tp->format == '.')
	{
		write(1, "es .", 3);
	}
	else if (*tp->format == '#')
	{
		write(1, "es #", 3);
	}
	else if (*tp->format == '+')
	{
		write(1, "es +", 3);
	}
	else if (*tp->format == ' ')
	{
		write(1, "es ", 3);
	}
	// tp->format++;
}