/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:40:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/20 17:26:01 by nmota-bu         ###   ########.fr       */
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
	t_print	tp;
	va_list	arg;

	va_start(arg, format);
	tp.len = 0;
	tp.widht = 0;
	while (*format)
	{
		if (*format == '%')
			format = ft_search_arg(arg, format + 1, &tp);
		else
			format = ft_read_text(&tp, format);
		if (!format)
		{
			if(write(1, "(null)", 6) == -1)
				return (-1);
			va_end(arg);
			return (tp.len);
		}
	}
	va_end(arg);
	return (tp.len);
}

