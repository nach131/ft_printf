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

void	ft_read_text(t_print *tp, va_list arg)
{
int	ch = va_arg(arg, int); //quitar
printf("%d",ch);
	char *next;

	next = ft_strchr(tp->format, '%');

	if (next)
		tp->widht = next - tp->format;
	else
	{
			tp->widht = ft_strlen(tp->format);
		// creo que aki join resto...
		}
	if (!tp->flag_zero)
		tp->to_write = ft_strjoin(tp->to_write, ft_char_to_str(tp->format, tp->widht));

	next = "";
	tp->widht = 0;
	// if (tp->flag_zero)
	// 	// ft_read_bonus(tp, arg);
	// else if (*tp->format == '%')
	// 	{
	// 		tp->format++;
	// 		ft_search_arg(arg, tp);
	// 	}
	while (*tp->format && *tp->format != '%')
	{
		tp->format++;
	}

}
