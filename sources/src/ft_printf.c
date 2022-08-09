/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:40:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/30 15:47:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_print	tp;
	va_list	arg;

	va_start(arg, format);
	tp.len = 0;
	tp.widht = 0;
	tp.error = 0;
	tp.zero = 0;
	tp.num_zero = 0;
	tp.to_arg = "";
	tp.to_write = "";
	while (*format)
	{
		if (*format == '%')
			format = ft_search_arg(arg, format + 1, &tp);
		else if (tp.len == -1)
		{
			va_end(arg);
			return (-1);
		}
		else
		{		
			format = ft_read_text(&tp, format, arg);
		
		}
	}
	va_end(arg);
	return (tp.len);
}
