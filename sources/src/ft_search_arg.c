/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:52:12 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/16 10:57:34 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

const	char	*ft_search_arg(va_list arg, const char *format, t_print *tp)
{
	if (*format == 'd' || *format == 'i')
		ft_print_dec(arg, format, tp);
	else if (*format == 's')
			ft_print_str(arg, tp);
	else if (*format == 'c')
			ft_print_char(arg, tp);
	else if (*format == '%')
		{
				write(1, "%", 1);
				tp->len += 1;
		}
	else if (*format == 'x')
	{
		ft_print_hex(arg, format, tp);
		// unsigned int x = va_arg(arg, unsigned int);
		// ft_print_hexa(x);
		// tp->len += ft_intlen((int)x, *format);

	}
	else
		return (NULL);
	format++;
	return (format);
}
