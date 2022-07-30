/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:52:12 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/20 17:26:32 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

const	char	*ft_search_arg(va_list arg, const char *format, t_print *tp)
{
	if (*format == '%')
		ft_write('%', tp);
	else if (*format == 'c')
		ft_print_char(arg, tp);
	else if (*format == 's')
		ft_print_str(arg, tp);
	else if (*format == 'p')
		ft_print_ptr(arg, tp);
	else if (*format == 'd' || *format == 'i')
		ft_print_dec(arg, tp);
	else if (*format == 'u')
		ft_print_unsint(arg, tp);
	else if (*format == 'x')
		ft_print_hex(arg, tp, "0123456789abcdef");
	else if (*format == 'X')
		ft_print_hex(arg, tp, "0123456789ABCDEF");
	format++;
	return (format);
}
