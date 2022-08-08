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

// static void	ft_write_str(const char *c, t_print *tp)
// {
// 	if (!tp->error)
// 	{
// 		if (write(1, c, tp->widht) == -1)
// 		{
// 			tp->error = 1;
// 			tp->len = -1;
// 		}
// 	}
// }

const char *ft_read_text(t_print *tp, const char *format, va_list arg)
{
	char *next;

	next = ft_strchr(format, '%');
	if (tp->zero)
	{
		tp->zero = 0;
		while (*format != 'd') // poner las demas...
		{
			ft_memcpy_bonus(tp->to_arg, format);
			format++;
		}
		tp->num_zero = ft_atoi(tp->to_arg);
		tp->to_arg = "";
		format = ft_search_arg(arg, format, tp);
	}
	if (next)
		tp->widht = next - format;
	else
		tp->widht = ft_strlen(format);
	tp->to_write = ft_strjoin(tp->to_write, ft_constchar_to_str_bonus(format, tp->widht));
	// ft_write_str(format, tp);

	while (*format && *format != '%')
	{
		format++;
	}
	return (format);
}
