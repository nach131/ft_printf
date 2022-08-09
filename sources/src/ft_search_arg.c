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
#include "libft.h"

void ft_search_arg(va_list arg, t_print *tp)
{
	if (*tp->format == '%')
		tp->to_write = ft_strjoin(tp->to_write, "%");
	int c;
	c = va_arg(arg, int);
	// else if (*tp->format == 'c')
	// 	ft_print_char(arg, tp);
	// else if (*tp->format == 's')
	// 	ft_print_str(arg, tp);
	// else if (*tp->format == 'p')
	// 	ft_print_ptr(arg, tp);
	// else if (*tp->format == 'd' || *tp->format == 'i')
	// 	ft_print_dec(arg, tp);
	// else if (*tp->format == 'u')
	// 	ft_print_unsint(arg, tp);
	// else if (*tp->format == 'x')
	// 	ft_print_hex(arg, tp, "0123456789abcdef");
	// else if (*tp->format == 'X')
	// 	ft_print_hex(arg, tp, "0123456789ABCDEF");
	// else if (*tp->format == '0')
	// {
	// 	tp->flag_zero = 1;
	// 	ft_read_text(tp, arg);
	// }
	tp->format++;
	// return (tp->format);
}
