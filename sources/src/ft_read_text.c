/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:41:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/30 15:49:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

static void	ft_write_str(const char *c, t_print *tp)
{
	if (!tp->error)
	{	
		if (write(1, c, tp->widht) == -1)
		{
			tp->error = 1;
			tp->len = -1;
		}
	}
}

const	char	*ft_read_text(t_print *tp, const char *format, va_list arg)
{
	char	*next;

	next = ft_strchr(format, '%');
	if (next)
		tp->widht = next - format;
	else if (tp->zero)
		{
			while(*format != 'd' )
			{
		 		tp->to_write = format;
				format++; 
			}
		tp->zero = 0;
		format = ft_search_arg(arg, format, tp);
		}
	else
		tp->widht = ft_strlen(format);
	ft_write_str(format, tp);
	while (*format && *format != '%')
		format++;
	return (format);
}
