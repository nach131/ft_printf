/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:41:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/06 23:28:42 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

// if (tp->zero)
// {
// 	tp->zero = 0;
// 	while (*format != 'd') // poner las demas...
// 	{
// 		ft_memcpy_bonus(tp->to_arg, format);
// 		format++;
// 	}
// 	tp->num_zero = ft_atoi(tp->to_arg);
// 	tp->to_arg = "";
// 	format = ft_search_arg(arg, format, tp);
// }

const char *ft_read_text(t_print *tp, const char *format, va_list arg)
{
	char *next;

	next = ft_strchr(format, '%');

	if (next)
		tp->widht = next - format;
	else
		tp->widht = ft_strlen(format);
	if (!tp->zero)
		tp->to_write = ft_strjoin(tp->to_write, ft_char_to_str(format, tp->widht));
	// ft_write_str(format, tp);

	next = "";
	tp->widht = 0;
	if (tp->zero)
		format = ft_read_bonus(tp, format, arg);
	while (*format && *format != '%')
	{
		format++;
	}
	return (format);
}
