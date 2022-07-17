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
	if (*format == 'd')
	{
		int d = va_arg(arg, int);
		ft_putnbr_fd(d, 1);
		tp->len += ft_intlen(d, *format);
	}
	else if (*format == 's')
	{
		char *s = va_arg(arg, char *);
		if (!s)
		{
			write(1, "(NULL", 6);
			tp->len += 6;
		}
		else
		{
			ft_putstr_fd(s, 1);
			tp->len += ft_strlen(s);
		}
	}
	else if (*format == 'x')
	{
		unsigned int x = va_arg(arg, unsigned int);
		ft_print_hexa(x);
		tp->len += ft_intlen((int)x, *format);
	}
	else
		return (NULL);
	format++;
	return (format);
}
