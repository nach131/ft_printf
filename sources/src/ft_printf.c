/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:40:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/16 11:45:04 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// #include <stdarg.h>
// #include <unistd.h>

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *format, ...)
{
	t_print	sc;
	va_list	arg;

	va_start(arg, format);
	sc.len = 0;
	sc.widht = 0;
	while (*format)
	{
		if (*format == '%')
			format = ft_search_arg(arg, format + 1, &sc);
		else
			format = ft_read_text(&sc, format);
		if (!format)
		{
			write(1, "(null)", 6);
			va_end(arg);
			return (sc.len);
		}
	}
	va_end(arg);
	return (sc.len);
}
