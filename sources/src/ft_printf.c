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
#include "libft.h"

int ft_printf(const char *format, ...)
{
	t_print tp;
	va_list arg;
	int len;

	va_start(arg, format);
	tp.format = format;
	tp.flag_percent = 0;
	tp.flag_error = 0;
	tp.flag_zero = 0;
	tp.flag_negative = 0;
	tp.num_zero = 0;
	tp.to_arg = "";
	tp.to_write = "";
	tp.to_prev = "";
	while (*tp.format)
	{
		if (*tp.format == '%')
		{
			tp.format++;
			tp.flag_percent = 1;
			ft_search_arg(arg, &tp);
		}
		else
		{
			ft_read_text(&tp, arg);
		}
	}
	va_end(arg);
	len = ft_strlen(tp.to_write);
	ft_write(len, &tp);
	return (len);
}
